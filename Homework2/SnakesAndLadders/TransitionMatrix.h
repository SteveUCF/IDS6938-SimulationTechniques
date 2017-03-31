#include <iostream>

int size = 101;  //TODO
Eigen::MatrixXf TransitionMatrix(size, size);
Eigen::VectorXf v(size);

unsigned int ROLLS = 32; //TODO

double prob = 1.0 / 6.0;  //TODO



void SetTransitionMatrix()
{
	TransitionMatrix.setZero();

	//TODO
	for (int i = 0; i < size - 6; i++)
	{
		TransitionMatrix(i, i + 1) = prob;
		TransitionMatrix(i, i + 2) = prob;
		TransitionMatrix(i, i + 3) = prob;
		TransitionMatrix(i, i + 4) = prob;
		TransitionMatrix(i, i + 5) = prob;
		TransitionMatrix(i, i + 6) = prob;
	}

	// row 95
	TransitionMatrix(95, 96) = prob;
	TransitionMatrix(95, 97) = prob;
	TransitionMatrix(95, 98) = prob;
	TransitionMatrix(95, 99) = prob;
	TransitionMatrix(95, 100) = (prob * 2.0);

	//row 96
	TransitionMatrix(96, 97) = prob;
	TransitionMatrix(96, 98) = prob;
	TransitionMatrix(96, 99) = prob;
	TransitionMatrix(96, 100) = (prob * 3.0);

	//row 97
	
	TransitionMatrix(97, 98) = prob;
	TransitionMatrix(97, 99) = prob;
	TransitionMatrix(97, 100) = (prob * 4.0);

	//row 98
	
	TransitionMatrix(98, 99) = prob;
	TransitionMatrix(98, 100) = (prob * 5.0);

	//row 99
	TransitionMatrix(99, 100) = 1.0;
	//row 100
	TransitionMatrix(100, 100) = 1.0;

		
	//std::cout << TransitionMatrix << std::endl;

}