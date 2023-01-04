#include "neurons.h"
#include <sstream>
#include <ctime>
#include <string>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <cstdlib>
#include <windows.h>
#include <unistd.h>
#include <cmath>

using namespace std;

ofstream matrixFile;    //sets up an output stream object

bool noseTouchActive = false;    //input check variables
bool lightAvoidanceActive = false;
bool gentleTouchForwardActive = false;
bool gentleTouchBackwardActive = false;
bool harshTouchActive = false;
bool thermotaxisActive = false;
bool chemorepulsionActive = false;
bool saltSensingActive = false;
bool basalForagingActive = false;

int firingRates[neuronCount][3] = {};   //makes an array to hold output firing data
int diagnosticCellID = 0;               //global variables for the diagnostic tool
int diagnosticOutputID = 0;
int diagnosticWeightList[neuronCount] = {};
float diagnosticOutputList[neuronCount] = {};
bool beginDiagnostic = true;

int hebbianMax = 220;                   //adjustable learning attributes
float hebbianFactor = .75;                  //220, .75, .25 works well
float LTDfactor = .25;

    //280, .1, .5 without glia is pretty good, but still not quite activated enough
        //same with 50, .5, .5, okay but not active enough...
    //50, .75, 0 with glia tuning seems optimal, except that command interneurons regress to 0 output over time
        //same with 50, .75, .5, great, but output neurons regress to zero over time


string motorFileLocation = "C:/Users/t420/Desktop/custom-elegans-network/connectome/motorOutputs.txt";
string sensoryLocation = "C:/Users/t420/Desktop/custom-elegans-network/connectome/sensoryInputs.txt";
string matrixLocation = "C:/Users/t420/Desktop/custom-elegans-network/connectome/cellularMatrixData.txt";

/*
Struct definition for a connectome object
*/
struct connectome;

//connectome c;   //constructs a connectome object

float calculateRandomWeight();
void useGlia(int cmdNeuronID, bool desiredState);
void glialWeightTuning();
bool getCellOutputFromMatrix(int targetID);
neuron getNeuronFromMatrix(int targetID);
int getCellThresholdFromMatrix(int targetID);
int getCellInputLenFromMatrix(int targetID);
int getInputFromMatrix(int neuronID, int inputID);
int getCellWeightLenFromMatrix(int targetID);
float getWeightFromMatrix(int neuronID, int weightID);
void updateOutputArray(int cellID, bool outputVal);
void neuronToString(neuron n);
neuron stringToNeuron(int id);
void adjustTuningVars();
bool diagnosticTool();
void LTD(int preID, int postID);
void hebbian(int preID, int postID);

/*
Array that reads in neuron info from an input file
*/
neuron neuralList[] = {
    stringToNeuron(1),
    stringToNeuron(2),
    stringToNeuron(3),
    stringToNeuron(4),
    stringToNeuron(5),
    stringToNeuron(6),
    stringToNeuron(7),
    stringToNeuron(8),
    stringToNeuron(9),
    stringToNeuron(10),
    stringToNeuron(11),
    stringToNeuron(12),
    stringToNeuron(13),
    stringToNeuron(14),
    stringToNeuron(15),
    stringToNeuron(16),
    stringToNeuron(17),
    stringToNeuron(18),
    stringToNeuron(19),
    stringToNeuron(20),
    stringToNeuron(21),
    stringToNeuron(22),
    stringToNeuron(23),
    stringToNeuron(24),
    stringToNeuron(25),
    stringToNeuron(26),
    stringToNeuron(27),
    stringToNeuron(28),
    stringToNeuron(29),
    stringToNeuron(30),
    stringToNeuron(31),
    stringToNeuron(32),
    stringToNeuron(33),
    stringToNeuron(34),
    stringToNeuron(35),
    stringToNeuron(36),
    stringToNeuron(37),
    stringToNeuron(38),
    stringToNeuron(39),
    stringToNeuron(40),
    stringToNeuron(41),
    stringToNeuron(42),
    stringToNeuron(43),
    stringToNeuron(44),
    stringToNeuron(45),
    stringToNeuron(46),
    stringToNeuron(47),
    stringToNeuron(48),
    stringToNeuron(49),
    stringToNeuron(50),
    stringToNeuron(51),
    stringToNeuron(52),
    stringToNeuron(53),
    stringToNeuron(54),
    stringToNeuron(55),
    stringToNeuron(56),
    stringToNeuron(57),
    stringToNeuron(58),
    stringToNeuron(59),
    stringToNeuron(60),
    stringToNeuron(61),
    stringToNeuron(62),
    stringToNeuron(63),
    stringToNeuron(64),
    stringToNeuron(65),
    stringToNeuron(66),
    stringToNeuron(67),
    stringToNeuron(68),
    stringToNeuron(69),
    stringToNeuron(70),
    stringToNeuron(71),
    stringToNeuron(72),
    stringToNeuron(73),
    stringToNeuron(74),
    stringToNeuron(75),
    stringToNeuron(76),
    stringToNeuron(77),
    stringToNeuron(78),
    stringToNeuron(79),
    stringToNeuron(80),
    stringToNeuron(81),
    stringToNeuron(82),
    stringToNeuron(83),
    stringToNeuron(84),
    stringToNeuron(85),
    stringToNeuron(86),
    stringToNeuron(87),
    stringToNeuron(88),
    stringToNeuron(89),
    stringToNeuron(90),
    stringToNeuron(91),
    stringToNeuron(92),
    stringToNeuron(93),
    stringToNeuron(94),
    stringToNeuron(95),
    stringToNeuron(96),
    stringToNeuron(97),
    stringToNeuron(98),
    stringToNeuron(99),
    stringToNeuron(100),
    stringToNeuron(101),
    stringToNeuron(102),
    stringToNeuron(103),
    stringToNeuron(104),
    stringToNeuron(105),
    stringToNeuron(106),
    stringToNeuron(107),
    stringToNeuron(108),
    stringToNeuron(109),
    stringToNeuron(110),
    stringToNeuron(111),
    stringToNeuron(112),
    stringToNeuron(113),
    stringToNeuron(114),
    stringToNeuron(115),
    stringToNeuron(116),
    stringToNeuron(117),
    stringToNeuron(118),
    stringToNeuron(119),
    stringToNeuron(120),
    stringToNeuron(121),
    stringToNeuron(122),
    stringToNeuron(123),
    stringToNeuron(124),
    stringToNeuron(125),
    stringToNeuron(126),
    stringToNeuron(127),
    stringToNeuron(128),
    stringToNeuron(129),
    stringToNeuron(130),
    stringToNeuron(131),
    stringToNeuron(132),
    stringToNeuron(133),
    stringToNeuron(134),
    stringToNeuron(135),
    stringToNeuron(136),
    stringToNeuron(137),
    stringToNeuron(138),
    stringToNeuron(139),
    stringToNeuron(140),
    stringToNeuron(141),
    stringToNeuron(142),
    stringToNeuron(143),
    stringToNeuron(144),
    stringToNeuron(145),
    stringToNeuron(146),
    stringToNeuron(147),
    stringToNeuron(148),
    stringToNeuron(149),
    stringToNeuron(150),
    stringToNeuron(151),
    stringToNeuron(152),
    stringToNeuron(153),
    stringToNeuron(154),
    stringToNeuron(155),
    stringToNeuron(156),
    stringToNeuron(157),
    stringToNeuron(158),
    stringToNeuron(159),
    stringToNeuron(160),
    stringToNeuron(161),
    stringToNeuron(162),
    stringToNeuron(163),
    stringToNeuron(164),
    stringToNeuron(165),
    stringToNeuron(166),
    stringToNeuron(167),
    stringToNeuron(168),
    stringToNeuron(169),
    stringToNeuron(170),
    stringToNeuron(171),
    stringToNeuron(172),
    stringToNeuron(173),
    stringToNeuron(174),
    stringToNeuron(175),
    stringToNeuron(176),
    stringToNeuron(177),
    stringToNeuron(178),
    stringToNeuron(179),
    stringToNeuron(180),
    stringToNeuron(181),
    stringToNeuron(182),
    stringToNeuron(183),
    stringToNeuron(184),
    stringToNeuron(185),
    stringToNeuron(186),
    stringToNeuron(187),
    stringToNeuron(188),
    stringToNeuron(189),
    stringToNeuron(190),
    stringToNeuron(191),
    stringToNeuron(192),
    stringToNeuron(193),
    stringToNeuron(194),
    stringToNeuron(195),
    stringToNeuron(196),
    stringToNeuron(197),
    stringToNeuron(198),
    stringToNeuron(199),
    stringToNeuron(200),
    stringToNeuron(201),
    stringToNeuron(202),
    stringToNeuron(203),
    stringToNeuron(204),
    stringToNeuron(205),
    stringToNeuron(206),
    stringToNeuron(207),
    stringToNeuron(208),
    stringToNeuron(209),
    stringToNeuron(210),
    stringToNeuron(211),
    stringToNeuron(212),
    stringToNeuron(213),
    stringToNeuron(214),
    stringToNeuron(215),
    stringToNeuron(216),
    stringToNeuron(217),
    stringToNeuron(218),
    stringToNeuron(219),
    stringToNeuron(220),
    stringToNeuron(221),
    stringToNeuron(222),
    stringToNeuron(223),
    stringToNeuron(224),
    stringToNeuron(225),
    stringToNeuron(226),
    stringToNeuron(227),
    stringToNeuron(228),
    stringToNeuron(229),
    stringToNeuron(230),
    stringToNeuron(231),
    stringToNeuron(232),
    stringToNeuron(233),
    stringToNeuron(234),
    stringToNeuron(235),
    stringToNeuron(236),
    stringToNeuron(237),
    stringToNeuron(238),
    stringToNeuron(239),
    stringToNeuron(240),
    stringToNeuron(241),
    stringToNeuron(242),
    stringToNeuron(243),
    stringToNeuron(244),
    stringToNeuron(245),
    stringToNeuron(246),
    stringToNeuron(247),
    stringToNeuron(248),
    stringToNeuron(249),
    stringToNeuron(250),
    stringToNeuron(251),
    stringToNeuron(252),
    stringToNeuron(253),
    stringToNeuron(254),
    stringToNeuron(255),
    stringToNeuron(256),
    stringToNeuron(257),
    stringToNeuron(258),
    stringToNeuron(259),
    stringToNeuron(260),
    stringToNeuron(261),
    stringToNeuron(262),
    stringToNeuron(263),
    stringToNeuron(264),
    stringToNeuron(265),
    stringToNeuron(266),
    stringToNeuron(267),
    stringToNeuron(268),
    stringToNeuron(269),
    stringToNeuron(270),
    stringToNeuron(271),
    stringToNeuron(272),
    stringToNeuron(273),
    stringToNeuron(274),
    stringToNeuron(275),
    stringToNeuron(276),
    stringToNeuron(277),
    stringToNeuron(278),
    stringToNeuron(279),
    stringToNeuron(280),
    stringToNeuron(281),
    stringToNeuron(282),
    stringToNeuron(283),
    stringToNeuron(284),
    stringToNeuron(285),
    stringToNeuron(286),
    stringToNeuron(287),
    stringToNeuron(288),
    stringToNeuron(289),
    stringToNeuron(290),
    stringToNeuron(291),
    stringToNeuron(292),
    stringToNeuron(293),
    stringToNeuron(294),
    stringToNeuron(295),
    stringToNeuron(296),
    stringToNeuron(297),
    stringToNeuron(298),
    stringToNeuron(299),
    stringToNeuron(300),
    stringToNeuron(301),
    stringToNeuron(302)
};


void printCellularMatrix();
void printMotorRatios();
void printCmdInterneurons();
bool activationFunction(int cellID);
void doLearning();
void setNextState();
void saveNewState();
void connectomeInit();

