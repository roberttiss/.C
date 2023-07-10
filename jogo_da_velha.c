#include <stdio.h>
#include <stdbool.h>
#define MAXN 10009

int mex[MAXN]= {0,0,0,0,0,1,1,1,2,2,0,3,3,1,1,1,0,4,3,3,3,2,2,2,4,4,0,5,5,2,2,2,3,3,0,5,0,1,1,1,3,3,3,5,6,4,4,1,0,5,5,6,6,2,7,7,7,8,0,1,9,2,7,2,3,3,3,9,0,5,4,4,8,6,6,2,7,1,1,1,0,5,5,9,3,1,8,2,8,5,0,1,1,12,2,2,7,3,3,9,4,4,0,11,3,3,3,9,2,2,8,1,3,5,0,9,12,2,6,13,13,5,0,1,1,4,11,7,7,10,3,4,1,4,0,5,0,3,3,6,7,2,14,13,10,4,12,9,2,2,3,3,6,9,9,1,16,4,8,3,3,2,15,1,1,4,0,5,5,16,6,6,6,8,0,16,5,4,4,17,2,2,7,14,6,10,12,1,0,16,13,3,6,2,7,7,8,1,0,5,17,2,12,15,3,11,0,19,18,12,4,16,17,2,2,21,6,9,4,19,5,5,17,10,3,6,19,2,7,8,4,1,9,12,7,2,13,6,3,19,5,9,4,8,8,17,17,2,15,18,1,1,8,5,21,16,21,3,19,19,13,5,18,1,4,17,7,2,7,6,3,19,12,5,5,16,16,6,17,19,7,7,18,1,4,17,0,9,16,3,3,14,13,22,0,1,15,24,17,2,6,18,3,4,19,19,0,8,21,16,3,15,7,26,18,13,1,1,17,9,2,21,2,6,22,19,9,5,16,4,16,20,3,7,18,23,22,8,20,5,16,21,15,6,10,19,18,18,18,4,4,17,17,7,2,3,23,19,9,5,0,16,16,3,17,30,2,18,18,8,4,17,17,9,27,6,10,19,19,14,9,9,4,20,17,14,11,7,18,6,19,19,5,13,16,16,10,6,19,19,23,18,4,4,17,12,12,14,10,6,3,19,5,9,5,21,16,20,6,7,7,18,30,13,13,17,12,21,15,10,3,19,22,18,8,4,32,17,17,11,14,6,26,24,12,5,9,16,16,6,7,7,7,18,18,8,4,17,20,7,16,10,10,22,19,22,9,23,4,13,17,20,7,11,23,23,4,5,9,5,16,16,10,17,10,22,18,23,8,4,17,17,20,16,32,13,19,19,33,5,5,24,8,17,20,33,18,18,23,13,22,33,33,16,15,10,10,19,19,33,18,8,20,17,17,11,16,18,26,22,19,12,9,16,16,34,20,17,35,23,18,8,8,8,17,33,16,32,10,11,22,11,12,23,9,8,17,17,11,33,18,18,19,13,12,21,16,16,10,20,14,11,22,23,34,8,17,17,29,16,7,34,19,19,9,23,5,8,32,17,33,11,23,18,18,8,12,12,16,16,16,10,32,22,22,11,18,13,8,20,17,11,21,11,15,19,22,12,12,16,16,32,17,17,35,23,18,8,13,13,9,17,16,10,10,19,14,19,25,12,12,13,20,14,11,11,23,10,22,22,35,9,16,16,17,10,20,11,18,18,13,13,24,17,12,16,15,34,19,19,33,12,16,32,8,17,20,33,18,10,18,32,24,8,16,16,16,15,32,19,19,22,13,13,32,20,20,35,33,34,15,22,19,12,12,13,13,21,20,14,14,18,18,23,22,13,9,17,16,15,15,10,11,19,18,12,12,8,20,17,11,21,15,15,31,12,38,13,25,8,20,10,15,11,23,18,13,13,12,12,12,21,32,10,19,19,9,9,38,13,20,17,14,11,14,27,18,5,12,13,1,21,16,17,17,19,11,11,18,13,8,12,24,20,16,11,15,19,19,12,9,13,13,13,33,17,14,3,15,32,19,8,9,4,16,15,32,19,19,11,33,18,32,17,17,14,14,33,18,10,19,12,35,33,16,16,15,26,10,11,23,18,13,13,20,20,20,16,37,34,22,19,23,18,25,8,17,17,11,11,18,10,10,19,40,36,9,16,16,15,32,11,6,18,18,13,8,17,9,35,16,34,10,19,19,31,35,9,21,13,20,14,10,18,18,23,34,41,12,4,16,32,5,26,11,14,18,13,12,8,20,17,16,16,23,15,19,19,35,40,16,16,20,17,46,14,11,18,34,8,12,17,20,16,32,39,19,22,31,23,9,8,8,21,17,33,15,10,10,22,19,12,21,16,20,15,32,35,11,18,18,34,13,9,29,16,21,11,14,19,19,35,35,16,8,17,20,33,14,11,10,30,13,44,40,1,16,28,32,44,19,11,23,23,9,32,17,17,21,16,49,2,22,40,35,33,16,8,34,17,43,10,18,18,39,22,9,9,16,21,37,14,26,19,33,18,27,32,8,24,24,33,18,32,10,19,38,12,16,16,16,17,43,10,5,18,18,39,9,17,17,35,16,47,37,22,19,35,23,40,0,8,17,33,38,18,15,39,34,22,9,16,25,21,15,22,14,11,18,45,9,40,17,20,36,33,15,10,22,19,35,35,16,16,17,20,46,45,30,18,23,34,9,12,21,16,43,32,19,19,42,38,18,32,8,24,24,33,18,18,15,22,26,50,33,16,16,15,17,46,6,18,18,39,57,48,17,35,49,49,14,22,19,38,23,13,16,16,17,36,14,11,10,32,19,41,52,21,25,24,32,24,14,14,18,30,51,9,8,17,36,16,11,19,19,19,35,49,16,13,29,53,53,36,10,18,34,34,9,9,9,20,52,37,14,19,22,23,30,40,20,17,36,21,36,32,18,19,31,55,33,21,16,37,17,35,23,30,18,34,48,12,24,35,49,49,44,22,19,22,18,35,34,8,20,29,47,18,23,30,55,22,38,8,21,28,20,11,26,14,18,51,56,40,12,17,16,21,52,14,26,19,35,54,44,8,20,32,33,60,10,10,23,22,48,35,16,16,57,37,14,31,30,18,18,43,20,17,17,42,33,10,34,19,19,50,56,16,12,37,20,53,23,23,26,44,56,48,12,25,16,49,34,19,14,38,45,49,39,16,12,48,10,15,27,15,39,55,55,4,13,16,64,24,58,36,47,30,63,12,9,12,33,49,51,14,10,19,23,56,49,12,16,17,58,38,33,18,18,22,34,35,21,8,16,29,50,31,15,38,51,64,12,12,24,61,15,37,23,19,55,35,61,8,16,17,53,53,10,18,10,41,56,45,40,21,28,16,65,55,19,22,54,23,44,12,17,24,40,32,54,27,14,50,62,13,8,28,43,17,55,10,23,30,56,37,24,17,13,16,52,37,14,14,23,18,49,9,16,20,47,60,23,10,11,64,19,38,38,8,16,64,20,48,27,19,56,51,20,24,24,28,16,37,14,14,26,35,65,25,9,21,20,64,65,10,23,69,66,53,40,16,16,49,66,26,19,19,23,18,39,9,9,70,65,45,18,14,22,19,65,25,16,16,12,17,47,36,15,18,34,64,24,13,56,49,61,37,19,10,23,68,56,44,12,17,53,67,30,27,18,55,39,45,21,16,16,44,66,53,15,15,23,54,64,20,47,17,21,52,14,14,22,74,65,49,12,9,20,53,42,18,19,74,31,38,8,13,13,17,66,66,19,15,54,51,71,17,17,20,16,67,46,14,14,50,47,38,16,9,12,17,53,65,10,18,71,31,57,20,17,28,61,69,14,19,10,18,44,52,17,9,72,72,63,18,23,14,22,38,21,8,12,41,74,55,19,18,67,64,14,9,65,8,68,51,11,11,14,42,65,56,12,16,29,40,65,10,63,11,71,62,60,16,21,25,41,62,59,15,10,18,71,64,9,8,15,68,54,14,19,19,42,67,54,25,12,57,55,68,18,18,46,73,60,13,20,13,52,69,19,59,10,10,58,71,17,12,24,40,58,18,18,11,19,45,16,16,9,17,20,62,10,23,30,11,14,17,8,65,56,16,46,11,18,10,15,49,12,9,29,57,68,49,18,11,14,48,57,21,16,25,75,74,59,26,10,78,11,12,16,17,8,68,18,14,11,19,15,70,35,64,9,9,53,65,58,18,31,46,53,20,8,16,81,64,45,19,15,10,54,71,12,48,29,13,65,36,22,14,19,47,16,16,12,12,57,62,65,18,18,46,66,50,17,8,8,56,64,19,10,10,30,76,16,9,17,45,65,23,18,11,11,48,70,21,16,25,72,62,59,68,10,18,71,20,20,13,13,25,33,64,22,27,10,67,66,9,9,9,60,18,18,18,22,38,48,17,8,25,52,69,62,65,10,10,63,76,69,9,8,13,78,81,18,11,48,62,65,16,12,9,29,74,65,10,14,11,66,53,17,8,8,81,9,22,19,10,10,83,21,89,17,9,68,81,58,18,59,47,72,67,21,9,66,69,59,19,30,26,71,20,17,8,21,44,78,22,12,10,79,51,51,38,17,20,60,68,18,11,18,11,59,17,28,8,81,9,55,19,15,58,58,36,16,17,13,67,63,49,18,71,47,15,61,21,9,12,57,82,68,63,11,64,66,57,77,8,49,56,12,22,19,18,27,81,83,75,20,45,65,44,65,11,14,59,15,13,16,56,25,76,62,22,10,15,66,66,17,8,8,41,9,69,12,30,79,70,16,38,9,17,8,13,18,18,75,62,19,67,89,16,9,9,80,50,10,10,36,11,20,17,8,25,16,63,22,47,19,59,68,16,16,9,12,39,65,18,46,78,66,60,82,21,24,44,75,64,19,10,10,83,66,69,17,8,79,58,66,14,14,59,10,16,21,16,73,45,59,13,23,26,36,82,17,8,65,16,35,19,19,15,31,88,46,64,17,12,60,13,18,18,18,62,10,68,74,16,41,73,45,19,23,15,18,14,17,20,72,61,9,64,73,19,14,67,86,52,64,60,57,8,77,18,11,58,71,71,73,16,12,56,12,19,15,68,10,18,11,75,17,20,89,74,23,26,22,46,80,10,16,16,12,8,72,18,18,7,71,36,53,8,13,16,9,64,76,19,10,10,61,21,12,12,45,8,23,14,14,38,80,74,16,16,44,13,59,77,68,10,33,11,11,17,17,83,1,9,69,22,11,72,37,70,16,33,50,8,18,18,18,90,19,91,87,21,21,13,75,89,19,10,34,14,11,71,17,70,4,44,73,11,22,14,70,70,21,9,60,13,92,72,18,23,90,22,53,80,20,16,9,12,19,22,43,96,11,11,17,17,68,82,18,23,18,38,59,91,74,16,54,8,85,69,72,23,46,84,17,17,17,72,12,83,84,62,22,11,46,86,76,20,57,8,44,77,14,75,47,47,70,16,16,13,64,80,72,15,15,46,51,20,20,20,88,44,64,22,19,11,10,95,21,76,45,5,8,77,23,18,42,36,82,87,70,16,9,52,12,19,95,46,66,78,17,20,44,13,34,81,75,35,15,67,74,16,5,13,45,65,91,63,11,76,36,17,8,32,9,81,97,22,60,74,10,52,66,97,45,8,41,18,18,35,6,91,87,16,16,8,12,62,19,79,18,18,78,17,17,20,77,9,84,73,11,22,10,90,97,76,40,8,80,96,23,66,42,47,97,17,13,103,83,99,57,10,22,10,46,99,75,20,20,98,44,86,69,38,19,43,16,74,5,73,89,77,68,34,18,42,47,70,77,8,12,9,45,19,10,46,43,83,71,42,17,8,8,69,69,23,10,10,10,21,16,45,45,40,68,39,18,11,51,11,17,8,44,21,81,99,22,67,10,15,83,100,0,20,82,72,77,93,42,47,10,79,37,16,40,45,68,65,85,6,14,97,20,17,89,8,12,81,38,7,14,50,34,79,97,40,17,44,80,98,58,11,14,96,87,4,16,44,45,73,59,43,18,75,97,97,20,44,13,88,69,35,35,10,91,66,83,36,45,40,44,98,46,6,15,67,67,87,32,21,81,99,38,19,10,43,71,83,5,20,53,96,98,106,38,15,82,96,74,16,13,9,73,68,39,14,18,100,47,70,87,8,77,69,35,2,19,15,39,66,83,33,12,89,98,18,18,38,97,67,96,96,32,52,102,68,77,77,18,2,83,33,17,17,98,88,81,76,35,50,101,46,83,75,36,17,68,44,23,3,15,14,70,4,44,32,81,76,35,10,34,39,78,100,78,12,17,4,72,69,35,22,22,82,37,16,8,40,80,85,3,11,18,42,42,94,79,13,9,81,99,2,22,10,34,90,83,36,20,77,44,98,86,10,14,10,67,101,4,13,33,92,80,14,34,23,97,97,92,32,1,81,99,57,19,85,6,46,101,5,13,20,8,98,23,112,104,35,87,96,37,86,0,99,70,87,41,10,86,97,45,87,8,41,88,98,19,35,3,70,96,52,45,97,68,98,23,18,14,69,47,89,79,32,13,69,81,35,11,22,44,95,95,5,5,4,34,103,81,35,14,10,43,32,86,36,33,92,80,96,34,11,97,47,68,12,4,88,88,2,7,19,3,96,96,33,17,12,1,98,98,90,38,10,70,1,37,32,5,99,92,72,115,6,111,97,36,5,17,1,60,84,2,35,85,74,96,100,33,33,77,68,98,84,18,38,97,87,82,1,5,69,102,102,19,34,34,71,106,5,17,67,8,88,64,11,14,10,96,101,32,45,13,80,85,72,10,39,47,97,79,96,17,81,104,99,19,14,3,39,66,78,0,12,94,32,103,112,10,59,87,4,32,16,5,99,99,77,10,6,15,11,97,72,32,32,16,69,2,35,38,63,46,112,33,12,36,77,103,96,23,2,38,67,101,4,32,99,99,99,80,22,6,18,78,33,72,103,37,114,84,2,35,67,108,46,120,45,5,17,99,96,34,10,97,74,79,96,13,103,69,17,38,22,19,78,119,109,33,9,80,98,93,90,35,7,10,94,101,37,21,33,77,91,3,10,18,11,33,67,4,17,69,88,111,2,19,39,10,75,5,36,116,8,103,39,114,35,35,70,79,32,13,112,38,92,115,34,95,95,97,104,0,91,13,84,114,7,35,6,96,41,66,106,13,85,77,34,34,38,100,14,113,96,32,76,0,12,87,89,3,18,104,97,33,113,20,16,88,107,38,7,50,94,13,76,33,5,77,72,101,34,11,79,35,104,32,17,21,76,42,11,35,39,15,78,33,9,9,16,98,76,93,18,80,79,96,8,44,16,33,72,77,34,3,83,38,33,9,4,32,73,81,35,14,38,18,10,32,117,72,9,72,98,121,10,7,11,79,82,13,37,16,9,106,6,3,34,75,104,33,12,52,73,76,111,109,7,113,105,75,112,33,8,17,85,34,93,71,23,79,87,32,17,73,106,60,35,7,22,121,112,60,36,33,4,13,76,106,2,38,87,79,1,13,128,12,72,115,22,10,90,104,102,82,17,13,76,84,11,14,14,18,10,83,59,21,115,72,17,34,15,23,14,113,105,32,8,111,9,16,115,19,15,117,109,9,56,32,8,73,114,128,7,2,19,105,17,33,33,12,98,10,81,22,18,11,91,96,37,83,5,111,11,89,19,10,78,97,36,72,17,32,76,114,18,14,6,94,32,13,33,21,72,110,34,6,30,23,87,33,37,8,73,16,14,14,23,18,75,86,104,9,16,110,13,114,15,38,14,79,113,37,13,33,9,85,107,19,10,23,121,74,82,17,8,13,84,38,11,23,19,86,95,114,33,89,115,107,15,35,11,11,82,113,17,13,16,16,72,77,34,10,86,104,12,68,17,8,76,84,35,129,3,19,32,32,17,53,9,115,101,15,6,11,94,82,120,37,16,111,106,35,115,22,78,83,109,21,21,17,13,10,119,23,94,82,105,32,95,9,77,9,92,39,19,23,119,109,129,118,13,69,81,111,14,113,10,19,112,36,21,20,85,34,10,35,11,22,87,32,90,8,36,12,21,128,19,15,83,18,9,131,17,8,110,111,11,23,14,39,75,75,33,33,12,80,73,15,96,22,38,94,108,8,13,81,16,14,34,15,18,83,112,9,80,17,110,73,119,35,14,58,71,37,8,36,9,72,92,110,22,23,23,23,98,108,8,76,119,128,127,115,22,71,78,109,33,80,17,76,76,119,11,19,82,75,20,112,12,21,77,89,34,15,83,86,62,101,37,13,13,81,111,23,22,22,32,13,33,36,20,20,128,76,35,11,18,113,37,32,121,16,16,89,39,10,18,83,124,36,36,20,17,114,84,35,35,82,116,13,129,12,9,72,98,34,22,23,23,23,9,37,37,81,16,11,74,18,15,15,19,117,33,20,17,88,100,59,14,11,82,113,86,128,4,16,68,115,34,15,23,18,120,94,32,8,84,114,77,14,105,19,75,78,36,33,9,122,15,100,35,31,128,94,63,32,24,5,21,14,34,39,10,23,55,33,12,17,17,76,114,35,30,87,63,78,60,53,9,21,80,34,22,31,11,79,12,37,37,13,20,128,115,120,15,10,104,83,130,33,17,17,84,119,35,19,82,105,37,95,36,16,118,39,34,78,86,104,9,82,49,16,20,114,114,38,27,30,78,95,33,33,9,129,10,84,128,23,70,18,134,131,37,24,111,115,103,58,15,83,133,136,21,52,17,17,60,128,18,54,22,78,66,36,134,103,115,49,34,23,35,23,120,131,32,21,29,33,85,127,34,19,19,117,135,25,20,73,17,81,38,79,23,54,100,75,24,33,115,118,129,129,123,128,94,113,37,20,69,17,128,77,118,22,78,112,36,36,80,32,132,81,114,128,18,120,113,90,111,24,33,85,115,34,58,19,124,135,113,32,20,17,114,38,72,19,39,134,117,57,16,135,21,128,99,31,23,18,51,37,61,21,60,89,118,63,58,39,19,91,91,103,25,53,81,99,38,14,34,23,100,112,130,21,21,58,129,132,55,38,113,82,130,131,135,20,114,92,63,30,13,112,112,45,65,32,17,81,126,11,22,23,105,90,129,36,130,115,80,63,129,117,135,94,82,32,20,17,20,133,98,115,39,55,83,57,33,21,21,132,73,38,18,23,87,134,134,60,123,140,52,132,43,31,31,86,96,96,12,29,17,114,129,128,11,6,104,97,12,56,85,122,118,73,62,26,113,94,61,20,9,17,92,77,58,22,75,86,60,130,5,17,56,93,99,133,31,18,95,100,131,57,133,98,85,128,93,18,62,130,87,120,28,17,73,128,129,58,19,55,100,131,16,80,136,88,84,31,23,18,113,113,134,17,33,16,103,23,129,26,104,130,91,110,61,17,114,114,132,23,39,63,90,83,57,24,16,128,118,99,59,59,30,87,130,131,81,57,133,98,63,58,22,55,139,96,56,56,16,81,137,47,82,30,63,95,29,60,21,85,129,128,140,86,23,87,82,120,25,12,126,128,80,98,19,26,95,131,65,56,132,132,123,81,26,51,51,116,130,57,57,60,80,129,132,109,59,130,125,134,131,28,84,119,141,89,58,58,71,90,45,29,49,52,88,81,59,23,148,87,56,139,84,60,33,80,69,58,19,142,59,91,56,146,20,64,129,128,82,39,87,86,83,60,29,28,80,88,76,23,59,125,87,130,131,84,33,128,103,34,63,22,86,131,131,80,9,129,84,62,62,62,54,131,75,57,29,17,25,132,136,63,59,135,87,101,56,20,16,36,118,132,58,22,55,83,8,21,32,129,132,93,59,128,27,96,131,100,60,60,68,128,118,58,27,26,59,120,61,56,20,64,129,128,108,62,63,83,121,151,130,28,122,128,84,59,59,96,144,134,20,111,133,103,107,58,14,50,135,134,107,56,52,69,17,114,128,31,63,131,130,60,57,24,85,129,128,14,35,135,113,113,61,106,81,126,65,63,63,58,19,83,130,130,98,49,129,99,26,128,30,82,131,100,95,60,133,80,85,63,86,35,130,96,61,56,56,126,129,89,58,58,131,19,83,57,92,61,80,102,111,62,31,105,58,131,111,12,128,103,107,129,58,59,59,139,105,56,56,17,81,81,132,22,58,131,97,104,57,28,80,129,141,88,59,139,18,87,56,97,57,128,92,80,58,63,97,124,70,94,134,56,106,128,145,15,23,120,104,66,130,57,21,65,129,14,23,30,139,67,56,9,24,81,129,133,89,63,58,109,112,135,60,56,129,102,102,62,133,82,30,131,143,57,60,137,107,58,58,148,124,59,87,56,24,104,111,128,62,108,34,104,100,97,57,110,80,56,141,126,124,152,67,96,134,56,48,57,107,85,63,58,59,124,130,110,146,56,76,106,128,133,19,63,66,135,97,150,65,25,115,129,148,62,83,101,105,56,134,12,133,129,132,141,124,66,19,130,142,105,129,1,99,59,62,18,131,134,95,146,57,110,77,58,111,30,42,108,70,143,61,99,57,128,127,107,63,131,109,75,130,57,32,132,64,84,128,148,58,134,131,61,128,60,115,110,129,136,18,35,125,94,56,56,106,84,128,128,103,131,3,71,109,57,28,85,56,64,102,15,130,125,105,131,143,69,57,127,85,132,152,11,83,135,67,150,12,106,128,133,10,26,58,124,90,135,133,68,98,157,63,59,27,105,108,131,143,104,57,128,133,58,63,138,31,109,60,24,61,56,93,99,62,67,23,143,138,124,60,29,137,72,63,14,145,59,125,113,129,12,102,111,128,62,62,39,63,66,130,130,57,61,129,64,126,142,152,74,105,56,150,21,110,137,103,132,63,59,130,86,125,113,160,111,69,59,140,58,58,104,66,139,133,8,56,158,148,111,62,62,70,151,138,150,147,128,98,80,63,104,10,152,139,120,61,12,106,133,62,70,63,134,143,97,25,60,98,103,129,63,59,62,96,67,101,151,97,99,128,127,153,35,152,66,139,139,61,61,167,111,114,130,62,67,163,143,71,8,130,72,68,63,63,15,19,142,96,146,141,141,128,22,133,144,39,143,66,90,150,49,65,136,123,27,59,34,108,67,131,36,57,17,65,103,63,58,19,142,70,108,132,36,99,148,140,67,96,39,121,66,147,130,57,85,132,132,59,14,130,103,131,134,61,106,141,122,148,38,63,11,159,130,120,129,45,64,133,128,10,39,143,100,25,60,60,65,98,132,136,145,59,120,105,146,151,136,111,137,149,101,58,97,109,130,139,65,151,16,99,106,42,59,70,131,146,69,60,122,110,98,129,35,31,130,143,105,60,45,102,99,137,113,39,58,121,97,147,37,68,68,134,106,59,145,108,70,134,154,53,60,168,122,144,144,63,66,142,158,150,32,45,64,102,148,39,101,170,66,109,130,135,16,65,156,136,148,133,15,67,82,36,1,45,168,153,122,138,63,71,100,150,103,12,141,64,102,59,62,46,58,159,147,150,57,68,89,129,38,42,39,128,105,146,131,17,140,137,107,157,63,15,66,147,72,44,41,68,69,128,43,125,11,151,121,114,172,13,107,129,144,42,75,95,154,108,56,36,64,128,148,164,19,58,104,100,60,37,65,65,149,123,59,145,163,120,143,154,99,45,127,163,156,58,58,14,139,154,44,172,36,64,128,128,46,11,70,71,147,128,44,107,98,141,35,38,42,43,70,150,56,45,148,137,34,103,47,109,75,147,57,41,33,21,123,148,62,43,67,138,158,36,8,168,110,77,132,38,75,166,142,151,41,33,64,128,157,96,11,160,121,66,60,155,4,169,141,99,38,34,46,15,134,146,33,40,135,122,89,129,90,71,142,139,74,49,169,45,73,144,39,54,143,104,154,130,8,68,129,141,123,38,34,19,120,131,45,45,64,140,118,58,11,121,71,75,8,41,52,111,76,128,145,43,38,146,33,36,13,32,12,77,148,35,42,14,120,105,151,45,64,69,140,156,43,143,38,75,147,155,44,68,33,148,152,161,11,79,143,151,57,13,166,110,89,144,35,66,159,161,101,151,169,73,73,149,39,46,179,71,75,130,8,41,72,141,152,42,15,163,146,131,53,40,166,168,65,144,38,75,42,78,151,37,131,36,73,133,152,10,171,158,139,121,8,115,41,141,141,35,42,175,96,101,131,36,36,76,148,43,19,11,38,75,158,44,41,33,123,69,148,145,74,79,129,36,36,45,37,41,103,144,42,10,159,154,70,155,40,76,145,140,46,46,129,174,71,135,41,12,65,156,152,47,140,43,67,146,154,36,45,157,68,103,156,35,38,147,142,41,12,189,69,148,133,39,39,160,170,124,45,8,20,72,141,35,42,128,96,151,131,147,40,13,152,103,22,11,104,75,139,101,44,177,141,73,145,43,43,70,74,75,36,40,57,24,68,144,76,42,15,159,96,158,9,8,148,128,46,149,14,100,71,135,41,41,68,149,123,148,157,120,108,146,158,40,48,127,8,144,144,35,161,147,150,24,57,33,40,73,152,43,46,38,11,139,154,41,37,72,167,42,47,164,173,74,146,147,45,184,166,115,132,149,35,47,150,147,52,44,167,73,145,148,39,46,155,100,40,147,5,98,149,129,38,42,133,74,41,158,40,16,145,157,98,46,149,75,147,150,37,44,57,156,126,42,34,101,79,151,97,40,159,122,65,72,141,38,47,95,37,32,151,111,21,69,145,43,11,124,66,71,159,37,20,60,153,111,58,10,6,74,151,45,33,69,44,122,129,35,47,63,159,105,103,57,8,33,145,140,39,74,146,121,104,135,37,166,68,136,42,62,178,170,155,158,36,13,145,122,46,144,153,100,75,147,41,37,180,61,99,73,157,34,155,146,155,33,13,122,72,132,156,35,58,166,79,162,143,81,33,69,128,46,46,165,75,150,154,44,37,77,126,148,148,148,62,59,74,33,28,56,157,136,149,38,35,147,142,87,29,57,33,45,148,148,34,42,174,171,150,135,37,9,60,111,100,145,58,46,70,146,36,21,61,164,149,141,38,78,71,178,120,37,12,189,17,133,46,39,46,59,86,75,135,37,65,72,35,38,75,15,74,131,143,33,56,56,148,132,132,95,121,71,154,32,12,144,111,76,47,39,170,62,151,155,183,154,92,156,149,38,35,150,63,116,74,33,36,45,148,144,46,46,167,30,159,56,37,103,72,153,148,133,193,96,70,130,33,56,73,184,80,132,141,38,66,150,138,125,60,169,73,133,34,34,59,146,78,117,130,98,8,77,160,35,38,176,74,131,134,33,61,176,136,39,132,153,14,75,139,37,37,189,12,81,133,128,43,70,86,75,73,44,56,115,77,35,78,166,63,105,79,57,57,28,152,133,39,160,172,75,150,56,32,98,165,156,140,128,63,43,155,130,33,99,56,8,122,144,35,97,147,58,154,138,57,12,145,148,129,168,146,112,75,135,130,37,153,149,102,76,128,82,58,134,57,36,56,56,157,149,129,100,83,14,178,158,138,57,88,128,148,168,43,62,146,36,104,41,32,149,149,156,100,63,18,82,134,143,99,56,148,98,65,149,47,11,147,135,37,143,60,119,76,133,34,170,83,154,117,21,56,32,72,152,38,35,58,58,101,70,151,36,28,73,39,34,62,59,30,150,135,98,32,144,99,140,123,39,34,151,146,167,16,61,20,85,132,35,55,135,142,131,36,36,33,148,128,85,34,158,193,104,139,142,89,37,144,162,137,190,39,31,151,131,126,61,118,110,129,149,38,47,78,147,105,98,81,88,126,115,58,74,160,182,154,130,21,32,127,129,84,35,58,75,87,70,167,36,56,128,77,39,62,59,11,150,61,103,24,189,157,99,157,193,63,74,10,147,37,32,32,115,132,50,201,147,131,138,131,33,60,81,128,58,34,83,112,121,139,139,61,37,162,180,69,63,34,82,70,131,86,178,56,173,122,22,35,35,11,113,67,158,60,114,137,137,34,101,62,112,171,135,21,56,149,129,114,75,23,113,19,143,53,93,61,145,118,144,59,75,154,130,130,37,60,172,57,140,137,39,136,91,154,33,33,32,32,149,132,192,30,58,151,101,146,131,76,12,85,188,34,19,59,154,95,61,52,72,68,169,38,63,58,82,155,112,109,36,56,98,132,129,38,78,147,161,94,57,60,119,81,128,188,196,31,138,104,147,61,107,153,172,144,38,34,116,22,91,151,48,28,173,156,169,50,172,197,90,113,159,33,36,93,93,128,34,79,22,95,86,37,32,61,17,128,114,86,176,187,94,131,171,57,81,115,115,132,55,59,86,97,150,72,48,72,102,84,63,58,54,87,117,109,49,56,118,65,81,35,75,128,131,37,87,57,57,12,56,118,193,31,197,75,135,49,37,77,167,136,211,197,58,94,134,53,83,203,190,149,144,59,38,90,159,143,116,36,33,81,133,58,18,51,204,147,36,130,61,80,80,171,119,216,3,94,138,134,33,32,73,98,80,22,59,35,117,139,138,91,57,184,123,69,148,30,87,79,83,159,32,56,52,132,50,88,78,178,101,125,138,24,36,152,133,153,89,50,86,95,139,49,32,57,169,153,140,34,39,82,146,134,199,37,76,185,89,62,35,133,183,176,146,36,29,84,137,148,127,54,74,97,95,32,21,32,202,93,81,128,18,113,94,131,117,36,84,61,118,80,62,35,86,135,116,33,57,53,119,81,145,58,195,22,83,83,32,56,89,80,62,126,34,54,51,91,138,17,57,88,173,80,169,50,22,83,135,49,36,218,169,81,128,39,39,54,143,117,121,135,28,92,85,59,62,75,196,18,67,33,57,13,88,145,157,132,59,159,135,138,56,85,206,114,81,34,54,54,94,131,83,194,56,16,80,129,22,38,83,135,113,130,33,33,102,133,157,58,217,31,86,117,164,56,37,153,129,137,137,46,54,74,138,53,121,61,128,65,129,35,38,86,135,33,67,36,48,93,140,30,34,27,143,95,171,37,28,21,136,132,88,140,58,94,91,36,33,194,128,128,127,193,62,22,90,159,52,32,211,20,119,64,39,58,87,146,112,163,49,25,72,132,35,63,86,190,30,195,57,24,84,93,145,63,34,62,15,78,32,32,33,80,24,169,39,58,23,87,131,57,33,181,198,85,65,62,50,86,147,87,36,36,53,73,140,63,51,35,197,139,83,56,61,85,92,62,123,192,200,87,82,134,57,73,194,153,92,35,209,31,83,139,56,36,53,20,123,73,54,113,59,151,158,194,37,52,80,132,129,38,86,58,27,191,33,24,24,128,129,165,184,38,95,78,130,56,33,60,172,81,63,43,27,82,131,60,174,49,25,144,156,35,55,34,163,87,120,57,24,81,133,58,54,58,143,31,95,37,32,28,129,169,84,39,34,14,27,60,20,37,37,137,80,38,35,22,86,142,170,33,48,20,84,128,39,176,155,182,131,121,32,37,12,129,50,204,163,34,125,87,33,57,8,128,140,89,62,38,31,95,130,190,80,36,60,123,168,39,10,79,174,131,124,41,80,85,144,149,62,39,135,30,135,33,48,48,133,133,196,38,35,31,83,32,125,36,180,129,126,34,34,27,94,131,180,56,37,137,65,132,42,59,95,175,56,33,33,33,17,69,34,82,14,38,174,134,37,52,85,141,136,184,39,39,30,94,36,199,32,32,128,85,129,38,86,135,130,116,12,9,17,123,140,34,63,87,184,167,130,154,25,92,129,59,59,10,34,87,82,53,12,32,145,133,132,193,35,159,86,32,32,57,33,24,197,128,54,94,193,131,131,194,170,37,80,156,59,38,39,175,130,125,33,33,93,137,27,58,35,38,83,71,56,28,85,129,62,84,34,39,18,82,131,33,32,32,52,63,156,35,50,90,130,178,36,36,102,29,39,39,34,196,59,124,130,32,56,80,129,62,114,39,39,67,158,33,12,32,88,128,210,55,38,38,95,37,135,53,33,33,132,34,34,120,82,35,29,175,44,56,118,133,153,35,63,18,70,120,33,9,60,133,63,200,11,38,86,86,32,32,33,129,129,73,181,34,94,82,131,60,52,37,107,65,156,35,35,135,34,87,48,33,36,20,128,148,39,59,19,130,135,32,16,80,129,129,168,124,58,18,134,36,57,199,128,98,85,85,14,71,130,130,166,113,33,20,69,39,34,200,82,131,117,183,37,8,85,129,38,35,39,34,130,131,36,33,84,32,133,77,59,35,78,83,21,56,85,129,17,81,133,38,82,113,131,162,150,56,16,153,129,35,83,170,130,154,36,36,20,84,128,39,193,35,35,86,130,37,37,57,33,129,93,63,34,30,138,171,203,175,37,61,85,38,11,95,39,159,159,33,33,9,145,128,34,205,35,35,131,154,13,32,85,129,141,148,39,18,134,134,33,57,228,128,98,85,35,14,22,135,130,61,174,33,129,73,133,58,82,35,11,57,37,13,32,77,132,132,38,39,142,23,167,36,17,81,133,157,129,35,22,75,130,32,202,33,36,73,132,54,15,74,130,57,57,49,32,68,129,129,35,34,135,154,130,162,36,12,29,39,205,50,167,38,135,147,32,37,33,129,59,73,34,10,27,40,12,29,32,37,153,80,35,38,62,86,56,74,155,0,17,129,15,10,87,35,131,130,32,32,1,80,33,136,34,34,34,130,94,40,36,37,128,157,144,38,38,71,135,61,32,132,33,129,128,10,34,42,167,155,78,135,8,21,144,149,35,39,34,130,130,162,17,5,37,133,63,42,35,2,75,90,32,32,57,141,129,197,34,6,30,36,134,57,56,61,72,80,38,35,34,34,158,82,36,36,9,93,128,34,55,38,22,150,32,28,8,61,165,136,76,201,10,74,131,0,60,32,128,77,65,35,2,66,86,32,37,36,36,12,73,10,34,94,131,60,57,41,32,16,172,132,35,63,34,79,87,131,20,29,133,32,148,59,38,14,75,95,130,79,33,129,22,43,34,10,30,82,60,33,61,32,16,80,149,14,34,34,154,167,151,33,84,73,128,58,59,35,197,131,130,1,61,195,133,145,168,34,10,74,134,9,12,37,37,16,149,35,38,204,78,130,56,40,20,17,128,15,10,74,131,135,95,60,56,1,153,153,62,39,34,67,131,146,33,9,37,152,68,153,38,38,135,139,130,207,33,12,76,93,34,6,193,38,151,146,32,32,49,80,129,7,34,181,70,147,36,36,64,84,10,58,156,35,14,192,142,8,32,33,179,194,39,34,15,79,134,60,60,41,173,68,132,38,31,83,142,159,61,33,12,76,133,46,34,47,11,66,75,135,32,56,136,132,62,62,39,67,67,134,5,75,61,37,128,89,35,2,75,135,130,61,17,60,73,84,34,18,38,35,199,190,44,37,8,36,129,35,46,212,131,143,134,29,69,37,32,77,177,35,14,139,130,67,80,36,5,168,152,34,39,82,155,158,100,37,37,65,72,14,11,46,170,150,61,33,12,64,211,128,58,63,19,11,130,135,8,13,132,177,62,62,34,3,74,138,57,32,32,37,169,129,42,35,83,147,134,159,33,33,69,88,137,58,205,7,78,135,32,32,8,129,141,149,39,34,10,74,131,36,57,37,173,72,47,14,14,130,154,61,56,33,194,64,132,34,58,82,216,75,78,16,28,65,133,129,47,39,18,67,56,33,33,33,140,148,157,42,11,66,78,130,32,207,222,36,76,168,34,10,198,155,151,78,32,37,169,141,35,35,178,159,196,131,36,9,69,128,148,34,34,171,75,83,44,8,16,136,73,153,62,15,15,158,134,33,78,61,37,157,77,14,26,192,154,135,37,33,36,64,88,43,39,196,158,155,57,32,28,21,180,64,156,46,212,34,82,45,9,64,173,152,72,129,11,62,75,146,150,110,40,57,69,84,34,10,131,155,83,154,37,13,21,132,42,165,39,154,10,74,33,17,32,199,133,145,213,31,59,71,135,21,65,129,153,156,157,27,10,79,155,155,60,32,202,152,145,35,19,197,154,74,56,224,73,0,128,34,43,156,42,71,130,32,28,65,156,132,7,62,34,67,134,33,12,37,32,32,145,42,22,66,154,135,139,222,36,9,136,39,34,43,193,174,75,135,32,16,65,132,144,38,227,208,70,79,33,17,93,181,65,39,47,19,2,130,135,32,207,36,36,180,168,34,67,158,155,134,173,44,8,72,153,35,35,75,166,74,131,36,40,69,164,128,34,38,38,75,135,44,32,207,5,153,141,38,18,67,200,138,36,75,16,198,72,136,35,14,78,142,16,224,194,33,81,152,10,39,217,155,138,150,135,21,65,132,149,42,152,39,67,79,134,12,69,21,148,77,63,22,66,142,135,74,158,40,36,173,63,23,27,196,155,130,194,202,21,136,153,42,62,39,183,74,131,24,33,199,137,39,46,196,22,22,78,37,21,65,33,156,69,164,27,18,231,134,40,33,37,32,157,129,42,212,201,130,159,32,40,33,76,137,43,196,35,22,75,134,130,21,68,156,165,35,157,18,82,171,33,29,37,37,157,65,144,19,11,139,150,32,79,45,36,73,153,15,43,22,155,134,36,28,32,136,141,35,62,34,208,74,150,40,73,199,181,89,68,22,35,42,130,151,25,45,20,156,133,128,18,34,193,167,36,33,32,215,77,132,19,42,197,94,32,150,17,20,152,157,137,77,38,11,66,75,135,21,68,153,160,73,18,15,74,167,154,56,218,32,207,133,39,19,47,154,147,32,74,151,20,76,145,144,196,171,66,71,146,37,8,72,153,132,35,39,10,67,146,17,33,33,173,128,34,180,14,75,159,139,79,60,9,64,144,152,43,46,193,19,19,159,37,25,13,156,38,62,39,63,67,135,33,60,152,152,128,34,174,62,75,139,41,28,195,60,64,132,157,34,193,186,138,24,36,32,32,176,144,26,58,187,159,135,57,60,36,137,133,34,46,14,38,66,155,16,56,60,156,69,144,181,94,34,143,9,33,45,37,65,128,189,11,75,63,16,21,236,20,40,64,157,34,30,174,174,66,36,32,32,189,84,35,35,216,63,155,138,134,33,76,16,133,39,62,62,66,139,135,21,57,17,69,153,148,15,59,196,154,33,154,61,37,68,149,35,62,34,94,179,147,44,20,56,128,43,46,243,35,71,138,44,65,32,57,81,152,181,10,191,186,146,36,36,89,65,133,129,31,35,142,159,32,158,215,40,140,129,46,196,62,66,66,130,16,21,198,132,64,42,34,27,59,146,151,33,56,16,85,34,19,31,66,142,130,41,60,206,69,157,168,34,67,138,162,36,154,21,32,65,172,38,201,34,91,154,155,33,33,157,148,39,34,220,59,58,158,25,72,68,60,156,35,23,23,74,155,33,240,207,61,65,77,156,19,58,58,154,79,143,36,20,194,152,18,217,59,62,130,139,219,32,60,57,149,35,181,39,82,155,17,36,187,56,65,77,153,22,63,170,82,147,60,57,36,148,152,30,59,59,155,33,135,16,37,156,153,35,204,227,87,200,131,29,36,56,157,34,34,216,35,159,147,61,68,57,40,88,133,63,23,193,155,151,33,139,52,65,136,141,22,35,58,63,74,37,20,33,152,188,34,34,19,50,150,130,28,32,184,60,76,128,54,39,79,174,17,33,76,16,168,136,156,38,59,63,135,32,198,20,29,152,133,30,213,35,171,155,130,21,37,57,156,38,38,63,63,158,154,17,36,61,56,80,136,62,22,221,154,32,56,207,57,189,152,18,34,196,59,62,134,61,25,89,153,153,35,38,34,23,67,138,24,33,194,152,68,39,209,83,159,142,16,56,57,57,192,152,161,27,196,155,155,36,228,37,157,153,14,22,192,63,91,37,134,17,194,152,39,39,34,59,209,155,178,16,52,210,189,35,38,51,30,213,158,20,36,199,56,153,153,19,59,63,63,16,70,155,60,57,185,133,23,193,50,209,130,66,25,37,149,148,136,35,197,58,158,134,17,36,61,56,39,156,172,38,159,154,193,37,57,36,152,128,23,30,196,59,191,159,33,25,32,136,59,212,58,58,187,154,155,60,52,206,56,34,169,59,35,159,135,21,61,222,57,189,168,58,54,196,155,12,36,194,37,168,129,34,39,192,58,158,191,60,33,36,157,15,58,59,59,59,154,130,16,49,198,60,38,230,34,34,191,131,29,60,61,56,213,172,144,38,197,190,32,32,36,33,211,133,23,63,220,62,154,142,37,32,56,129,84,129,58,34,18,158,134,53,206,152,61,34,208,59,59,201,147,154,56,60,88,145,152,39,27,39,146,134,211,49,32,202,129,22,59,59,58,196,143,48,36,20,199,152,156,229,62,59,135,175,32,32,210,57,133,168,34,34,193,139,86,211,77,61,136,152,156,19,212,63,37,143,60,57,152,152,23,18,38,216,83,147,130,37,61,195,153,172,58,34,58,138,131,20,32,206,56,188,129,26,38,191,130,143,32,57,57,132,145,51,39,196,200,183,158,36,56,195,152,81,59,34,54,63,155,155,33,33,206,168,181,205,38,35,142,150,52,195,60,172,145,133,38,58,158,158,158,60,52,61,195,141,38,62,221,63,154,134,186,48,76,133,80,39,34,50,174,151,147,56,32,60,169,81,173,39,34,155,154,57,60,56,61,157,132,59,59,197,187,91,191,222,57,199,133,133,58,220,62,139,142,33,56,198,165,153,34,43,34,91,158,167,29,33,152,181,141,153,38,83,130,150,49,222,60,76,156,128,34,39,193,246,158,142,56,56,144,141,38,197,227,192,143,155,60,48,57,61,161,173,238,50,55,130,61,56,195,219,199,84,157,34,34,158,134,158,36,61,61,132,148,234,35,58,190,154,131,48,36,232,140,54,27,55,255,225,142,130,49,37,156,145,156,51,34,82,151,131,20,36,199,52,168,141,35,192,159,190,143,32,48,60,140,132,18,58,193,256,212,138,257,49,198,172,50,43,216,94,175,155,60,33,57,157,18,136,59,35,62,135,255,56,198,248,169,133,137,51,34,193,83,60,60,52,37,207,141,59,22,234,170,130,32,33,48,57,132,80,63,38,55,209,134,175,37,195,210,137,168,168,39,193,131,143,36,60,52,144,132,129,38,59,197,256,166,60,53,53,152,137,63,51,220,55,159,131,56,41,215,165,81,129,230,74,196,186,130,33,36,218,169,157,153,55,50,201,166,61,36,37,81,204,140,39,63,220,83,178,60,56,85,198,141,62,62,247,74,196,143,171,53,48,152,258,63,250,62,126,131,130,52,215,257,81,153,128,34,193,155,191,60,228,56,56,156,132,38,38,197,209,134,142,36,33,199,137,63,58,35,59,225,147,154,52,202,73,145,137,34,39,193,155,98,60,53,223,173,152,136,35,59,175,175,175,174,33,57,137,133,54,34,196,78,155,179,49,49,207,169,59,197,58,58,213,134,143,48,199,203,23,149,35,90,192,190,74,56,36,57,172,153,152,54,63,59,20,150,159,32,215,219,156,35,59,192,54,134,135,260,57,37,164,136,58,35,256,139,130,32,44,33,202,245,59,34,34,193,134,171,57,223,56,56,136,38,180,39,216,256,159,33,60,57,145,137,145,63,38,59,182,134,32,61,198,73,59,62,34,58,193,134,36,179,194,218,208,58,129,35,212,135,167,131,195,57,240,168,152,87,58,196,78,60,57,32,85,195,153,62,55,63,79,174,151,48,36,203,173,63,133,217,59,197,151,32,49,49,36,132,165,136,58,193,143,60,130,32,32,195,205,169,98,39,170,178,135,171,36,60,128,149,181,58,59,59,135,130,150,56,120,215,209,59,63,58,213,138,174,57,194,252,168,160,73,59,55,192,61,183,36,36,237,137,129,39,51,38,221,131,159,256,37,149,231,133,59,34,82,163,143,146,48,218,72,219,152,35,38,192,187,154,222,33,222,101,141,34,46,51,193,162,134,32,77,37,152,172,201,50,192,34,146,174,33,48,121,161,168,172,226,257,155,130,175,56,33,76,230,133,161,82,213,75,256,57,37,61,258,152,132,47,221,39,166,61,56,31,84,168,164,58,51,193,234,182,134,61,198,198,169,59,59,34,39,134,155,83,232,194,32,132,140,246,59,230,178,56,56,33,214,245,161,136,208,63,75,167,60,37,32,229,195,169,59,50,79,58,138,131,57,48,206,144,145,35,58,47,197,134,170,49,36,259,128,176,34,256,205,200,259,57,57,72,52,129,129,62,257,79,79,166,171,260,33,32,173,63,35,71,38,204,74,61,32,172,258,59,152,34,39,138,167,146,48,240,77,222,129,129,242,204,216,56,134,174,33,203,185,58,39,58,75,256,194,37,32,202,165,176,189,38,62,250,167,78,69,48,199,256,172,157,47,38,216,130,170,61,36,33,113,133,152,213,39,35,257,57,130,56,207,224,169,38,247,34,260,61,36,259,33,214,85,153,58,250,95,130,134,175,202,61,260,216,168,63,208,58,246,257,218,32,37,219,148,156,242,123,79,256,202,219,40,214,161,168,129,38,38,221,182,74,159,233,195,172,137,201,256,235,205,162,171,178,37,105,168,153,35,59,130,74,167,61,49,36,57,72,168,205,34,196,162,60,159,194,222,180,161,192,62,39,235,163,75,262,228,168,259,145,38,38,247,197,167,138,13,253,93,232,128,58,256,205,257,175,57,44,61,202,165,38,38,62,79,213,56,75,259,206,168,149,169,63,78,239,194,32,79,207,257,73,152,39,204,58,217,147,154,57,32,32,198,157,180,227,192,74,143,134,171,259,194,161,164,152,205,50,216,163,155,32,207,73,184,59,96,63,250,182,33,191,206,72,173,205,189};
char str[MAXN];

void stevehalim(); 

int main() {
   
    int N;

    while (scanf("%d", &N), N) {
        scanf(" %s", str);
        bool ok = false;
        for (int i = 1; i < N; i++) {
            if (str[i] == 'X' && str[i - 1] == 'X') {
                ok = true;
            }
        }
        for (int i = 2; i < N; i++) {
            if (str[i] == 'X' && str[i - 2] == 'X') {
                ok = true;
            }
        }
        if (ok) {
            printf("S\n");
            continue;
        }
        int last = -3, ans = 0;
        for (int i = 0; i < N; i++) {
            if (str[i] == 'X') {
                ans ^= mex[i - last - 1];
                last = i;
            }
        }
        ans ^= mex[N - last + 1];
        if (ans != 0) {
            printf("S\n");
        } else {
            printf("N\n");
        }
    }

    return 0;
}

void stevehalim() {
    
    for (int n = 1; n < MAXN; n++) {
        if (n <= 2) {
            mex[n] = 0;
            continue;
        }
        int jog[MAXN];
        int jogSize = 0;
        for (int i = 3; i <= n - 2; i++) {
            bool found = false;
            int xorResult = mex[i - 1] ^ mex[n - i];
            for (int j = 0; j < jogSize; j++) {
                if (jog[j] == xorResult) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                jog[jogSize++] = xorResult;
            }
        }
        int cnt = 0;
        while (true) {
            bool found = false;
            for (int j = 0; j < jogSize; j++) {
                if (jog[j] == cnt) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                break;
            }
            cnt++;
        }
        mex[n] = cnt;
    }

}

