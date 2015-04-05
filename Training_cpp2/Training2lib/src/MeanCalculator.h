#ifndef MEANCALCULATOR_H
#define MEANCALCULATOR_H

#include <vector>


/**
 * @brief Class to calculate the mean of the values added to the internal list
 *
 * @author Manuel Rombach
 * @date April 2015
 */
class MeanCalculator
{

private:
	std::vector<int> values;

public:

	/**
	 * Add a new value to the internal list
	 *
	 * @param newValue New value to be added to the internal list
	 */
	void AddValue(int newValue);

	/**
	 * Calculate the mean of the current values
	 */
	int GetMean();

	/**
	 * Return the number of values in the internal list
	 */
	int GetCount();

	/**
	 * Reset the internal list of values
	 */
	void Reset();
};


#endif