/*	Code Created by James Michael Armstrong (NexusName:BlazesRus)
*/

#include "StringFunctions.h"
#include <locale>

<<<<<<< HEAD
#include <math.h>
=======
<<<<<<< HEAD
#include <math.h>
=======
>>>>>>> origin/master
>>>>>>> origin/master
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <iosfwd>
<<<<<<< HEAD
#include <limits>
=======
<<<<<<< HEAD
#include <limits>
=======
>>>>>>> origin/master
>>>>>>> origin/master

using std::cout;
using std::string;

//************************************
// Method:    NumberOfPlaces
// FullName:  Niflib::StringFunctions::NumberOfPlaces
// Access:    public static
// Returns:   int
// Qualifier:
// Parameter: int Value
//************************************
int Niflib::StringFunctions::NumberOfPlaces(int Value)
{
	int NumberOfPlaces = floor(log10(Value));
	return NumberOfPlaces;
}

//************************************
// Method:    NumberOfPlaces
// FullName:  Niflib::StringFunctions::NumberOfPlaces
// Access:    public static
// Returns:   int
// Qualifier:
// Parameter: double Value
//************************************
int Niflib::StringFunctions::NumberOfPlaces(double Value)
{
	int NumberOfPlaces = floor(log10(Value));
	return NumberOfPlaces;
}

//************************************
// Method:    NumberOfDecimalPlaces
// FullName:  Niflib::StringFunctions::NumberOfDecimalPlaces
// Access:    public static
// Returns:   int
// Qualifier:
// Parameter: int Value
//************************************
int Niflib::StringFunctions::NumberOfDecimalPlaces(int Value)
{
	int NumberOfPlaces = floor(log(Value));
<<<<<<< HEAD
	NumberOfPlaces *= -1;
	NumberOfPlaces += 1;
=======
<<<<<<< HEAD
	NumberOfPlaces *= -1;
	NumberOfPlaces += 1;
=======
>>>>>>> origin/master
>>>>>>> origin/master
	return NumberOfPlaces;
}

//************************************
// Method:    NumberOfDecimalPlaces
// FullName:  Niflib::StringFunctions::NumberOfDecimalPlaces
// Access:    public static
// Returns:   int
// Qualifier:
// Parameter: double Value
//************************************
int Niflib::StringFunctions::NumberOfDecimalPlaces(double Value)
{
	int NumberOfPlaces = floor(log(Value));
<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> origin/master
	NumberOfPlaces *= -1;
	NumberOfPlaces += 1;
	return NumberOfPlaces;
}

int Niflib::StringFunctions::NumberOfDecimalPlaces(float Value)
{
	int NumberOfPlaces = floor(log(Value));
	NumberOfPlaces *= -1;
	NumberOfPlaces += 1;
<<<<<<< HEAD
=======
=======
>>>>>>> origin/master
>>>>>>> origin/master
	return NumberOfPlaces;
}

//************************************
// Method:    CharAsInt
// FullName:  Niflib::StringFunctions::CharAsInt
// Access:    public static
// Returns:   int
// Qualifier:
// Parameter: char Temp
//************************************
int Niflib::StringFunctions::CharAsInt(char Temp)
{
	int Value = 0;
	if(Temp == '0') { Value = 0; }
	else if(Temp == '1') { Value = 1; }
	else if(Temp == '2') { Value = 2; }
	else if(Temp == '3') { Value = 3; }
	else if(Temp == '4') { Value = 4; }
	else if(Temp == '5') { Value = 5; }
	else if(Temp == '6') { Value = 6; }
	else if(Temp == '7') { Value = 7; }
	else if(Temp == '8') { Value = 8; }
	else if(Temp == '9') { Value = 9; }
	return Value;
}

//************************************
// Method:    DigitAsChar
// FullName:  Niflib::StringFunctions::DigitAsChar
// Access:    public static
// Returns:   int
// Qualifier:
// Parameter: int Temp
//************************************
int Niflib::StringFunctions::DigitAsChar(int Temp)
{
	char Value = '0';
	if(Temp == 0) { Value = '0'; }
	else if(Temp == 1) { Value = '1'; }
	else if(Temp == 2) { Value = '2'; }
	else if(Temp == 3) { Value = '3'; }
	else if(Temp == 4) { Value = '4'; }
	else if(Temp == 5) { Value = '5'; }
	else if(Temp == 6) { Value = '6'; }
	else if(Temp == 7) { Value = '7'; }
	else if(Temp == 8) { Value = '8'; }
	else if(Temp == 9) { Value = '9'; }
	return Value;
}

//************************************
// Method:    IsDigit
// FullName:  Niflib::StringFunctions::IsDigit
// Access:    public static
// Returns:   bool
// Qualifier:
// Parameter: char Temp
//************************************
bool Niflib::StringFunctions::IsDigit(char Temp)
{
	bool DigitType = false;
	if(Temp == '0') { DigitType = true; }
	else if(Temp == '1') { DigitType = true; }
	else if(Temp == '2') { DigitType = true; }
	else if(Temp == '3') { DigitType = true; }
	else if(Temp == '4') { DigitType = true; }
	else if(Temp == '5') { DigitType = true; }
	else if(Temp == '6') { DigitType = true; }
	else if(Temp == '7') { DigitType = true; }
	else if(Temp == '8') { DigitType = true; }
	else if(Temp == '9') { DigitType = true; }
	return DigitType;
}

//************************************
// Method:    IsDigit
// FullName:  Niflib::StringFunctions::IsDigit
// Access:    public static
// Returns:   bool
// Qualifier:
// Parameter: std::string Temp
//************************************
bool Niflib::StringFunctions::IsDigit(std::string Temp)
{
	return IsDigit(Temp.at(0));
}

// Returns Double Value version of String
double Niflib::StringFunctions::ReadDoubleFromString(string TempString)
{
	int WholeNumberPart = 0;
	double DecimalPart = 0.0;
	int PlaceNumber = 0;
	double CalculatedValue;
	bool IsNegative = false;
	string StringChar;
	int StringLength;
	StringLength = TempString.length();
	string WholeNumberBuffer = "";
	string DecimalBuffer = "";
	bool ReadingDecimal = false;
	int TempInt;
	int TempInt02;
	double TempDouble;
	//cout << "WholeNumber Part:";
	for(int i = 0; i < StringLength; i++)
	{
		StringChar = TempString.at(i);
		if(IsDigit(StringChar))
		{
			std::cout << StringChar;
			if(ReadingDecimal)
			{
				DecimalBuffer += StringChar;
			}
			else
			{
				WholeNumberBuffer += StringChar;
			}
		}
		else if(StringChar == "-")
		{
			IsNegative = true;
		}
		else if(StringChar == ".")
		{
			ReadingDecimal = true;
			//cout << "\nDecimal Part:";
		}
	}
	//cout << "\nWhole Number Calculations:\n";
	for(int i = WholeNumberBuffer.length() - 1; i >= 0; i--)
	{
		StringChar = WholeNumberBuffer.at(i);
		TempInt = CharAsInt(StringChar.at(0));
		TempInt02 = TempInt*pow(10, PlaceNumber);
		//cout << "StringChar:" << TempInt << " PlaceNumber:" << PlaceNumber << " +=" << TempInt02<<"\n";
		if(StringChar != "0")
		{
			WholeNumberPart += TempInt02;
		}
		PlaceNumber++;
	}
	//cout << "\nEnd of WholeNumber Calculations\n";
	StringLength = DecimalBuffer.length();
	PlaceNumber = -1;
	for(int i = 0; i < StringLength; i++)
	{
		StringChar = DecimalBuffer.at(i);
		TempInt = CharAsInt(StringChar.at(0));
		TempDouble = TempInt*pow(10, PlaceNumber);
		//cout << "StringChar:" << TempInt << " PlaceNumber:" << PlaceNumber << " +=" << TempDouble << "\n";
		if(IsDigit(StringChar))
		{
			if(StringChar != "0")
			{
				DecimalPart += (double) TempInt*pow(10, PlaceNumber);
			}
			PlaceNumber--;
		}
	}
	//cout << "\nEnd of Decimal Calculations\n";
	CalculatedValue = (double) WholeNumberPart + DecimalPart;
	if(IsNegative == true)
	{
		CalculatedValue *= -1.0;
	}
	cout << "\n";
	return CalculatedValue;
}
/** Returns Integer value version of String
 * @param TempString
 * @return
 */
int Niflib::StringFunctions::ReadIntFromString(string TempString)
{
	int WholeNumberPart = 0;
	int PlaceNumber = 0;
	bool IsNegative = false;
	string StringChar;
	int StringLength;
	StringLength = TempString.length();
	string WholeNumberBuffer = "";
	int TempInt;
	int TempInt02;
	for(int i = 0; i < StringLength; i++)
	{
		StringChar = TempString.at(i);
		if(StringChar == "-")
		{
			IsNegative = true;
		}
		else
		{
			if(IsDigit(StringChar))
			{
				WholeNumberBuffer += StringChar;
			}
		}
	}
	//cout << "\nWhole Number Calculations:\n";
	for(int i = WholeNumberBuffer.length() - 1; i >= 0; i--)
	{
		StringChar = WholeNumberBuffer.at(i);
		TempInt = CharAsInt(StringChar.at(0));
		TempInt02 = TempInt*pow(10, PlaceNumber);
		//cout << "StringChar:" << TempInt << " PlaceNumber:" << PlaceNumber << " +=" << TempInt02<<"\n";
		if(StringChar != "0")
		{
			WholeNumberPart += TempInt02;
		}
		PlaceNumber++;
	}
	//cout << "\nEnd of WholeNumber Calculations\n";
	if(IsNegative == true)
	{
		WholeNumberPart *= -1.0;
	}
	return WholeNumberPart;
}

bool Niflib::StringFunctions::ReadBoolFromInt(int Temp)
{
	if(Temp == 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//************************************
// Method:    DoubleAsString
// FullName:  Niflib::StringFunctions::DoubleAsString
// Access:    public static
// Returns:   string
// Qualifier:
// Parameter: double TempValue
//************************************
string Niflib::StringFunctions::DoubleAsString(double TempValue)
{
	string TempString = std::to_string(TempValue);
	return TempString;
}

//************************************
// Method:    ReadBoolFromString
// FullName:  Niflib::StringFunctions::ReadBoolFromString
// Access:    public static
// Returns:   bool
// Qualifier:
// Parameter: string LineString
//************************************
bool Niflib::StringFunctions::ReadBoolFromString(string LineString)
{
	//Value found in string
	bool FoundValue = false;
	const string TrueString = "true";
	const string FalseString = "false";
	//Current character loaded in steam
	char StringChar;
	//Current Loaded parts of LineString
	string LoadedLineString = "";
	//Current Characters worth of string found that match SearchString
	string PartialSearchBuffer = "";
	//Current Index of Loaded PartialSearch
	int PartialBufferIndex = 0;
	//Total size of LineString to load
	int StringSize = LineString.size();
	//Boolean check to determine if have found first string match
	bool SearchSuccess = false;
	std::locale loc;
	for(int i = 0; i < StringSize&&SearchSuccess == false; i++)
	{
		StringChar = std::tolower(LineString.at(i), loc);
		if(StringChar == '1')
		{
			SearchSuccess = true;
			FoundValue = true;
		}
		else if(StringChar == '0')
		{
			SearchSuccess = true;
			//FoundValue=false;
		}
		else if(TrueString.at(PartialBufferIndex) == StringChar)
		{
			PartialSearchBuffer += StringChar;
			if(PartialSearchBuffer == TrueString)
			{
				SearchSuccess = true;
				FoundValue = true;
			}
			else
			{
				PartialBufferIndex++;
			}
		}
		else if(FalseString.at(PartialBufferIndex) == StringChar)
		{
			PartialSearchBuffer += StringChar;
			if(PartialSearchBuffer == FalseString)
			{
				SearchSuccess = true;
				//FoundValue=false;
			}
			else
			{
				PartialBufferIndex++;
			}
		}
		//Failed Partial String Search
		else
		{
			PartialSearchBuffer = "";
			PartialBufferIndex = 0;
		}
	}
	return FoundValue;
}

/**Check if LineString Contains SearchedString
 * @param LineString
 * @param SearchedString
 * @return
 */
bool Niflib::StringFunctions::LineStringContains(string LineString, string SearchedString)
{
	bool Confirmed = false;
	if((LineString.compare(SearchedString) == 0 || LineString.compare(SearchedString) >= 1))
	{
		Confirmed = true;
	}
	return Confirmed;
}

//************************************
// Method:    CreateTabSpace
// FullName:  Niflib::StringFunctions::CreateTabSpace
// Access:    public static
// Returns:   string
// Qualifier:
// Parameter: int temp
//************************************
string Niflib::StringFunctions::CreateTabSpace(int temp)
{
	string TempString = "";
	while(temp > 0)
	{
		TempString += "	";
		temp--;
	}
	return TempString;
}

/** Use to keep tabs aligned on parameters(tab is equal to 4 spaces)
 * @param LineString @return StringContaining Tabs*/
string Niflib::StringFunctions::OutputLineStringTabs(string LineString)
{
	string TempString = "";
	int StringLength = LineString.length();
	bool Finished = false;
	string StringChar;
	for(int i = 0; (i < StringLength) || Finished; i++)
	{
		StringChar = "" + LineString.at(i);
		if(StringChar == "[^\\\\d]")//Only Records Whitespace/tabs
		{
			TempString += StringChar;
		}
		else
		{
			Finished = true;
		}
	}
	return TempString;
}
/** Use to keep tabs aligned on parameters
 * @param LineString
 * @return
 */
string Niflib::StringFunctions::OutputQuadVariableLines(string LineString)
{
	string TempString = "";
	int StringLength = LineString.length();
	bool RecordString = false;
	string StringChar;
	for(int i = 0; (i < StringLength); i++)
	{
		StringChar = "" + LineString.at(i);
		if(RecordString)
		{
			TempString += StringChar;
		}
		else
		{
			if(StringChar == "(")//Only Records Whitespace/tabs
			{
				RecordString = true;
				TempString += StringChar;
			}
		}
	}
	return TempString;
}
/** Returns the filename from a full file-path
 * @param TempString
 * @return
 */
string Niflib::StringFunctions::SeparateFilePathIntoFileName(string TempString)
{
	string FileName = "";
	int StringLength = TempString.length();
	char StringChar;
	for(int i = 0; i < StringLength; i++)
	{
		StringChar = TempString.at(i);
		if(StringChar == '/' || StringChar == '\\')//Separate filename with path slashs(and reset filename buffer)
		{
			FileName = "";
		}
		else
		{
			FileName += StringChar;
		}
	}
	return FileName;
}
/**
 * @param LineString
 * @param TargetObject
 * @return
 */
string Niflib::StringFunctions::CreateLinkedHTMLString(string LineString, string TargetObject)
{
	return (string) ("<a href=" + TargetObject + "><code>" + LineString + "</code></a>");
}

/** Remove whitespace from start of line
 * @param LineString @return String*/
string Niflib::StringFunctions::RemoveStringTabs(string LineString)
{
	string TempString = "";
	int StringLength = LineString.length();
	bool Finished = false;
	string StringChar;
	for(int i = 0; i < StringLength; i++)
	{
		StringChar = "" + LineString.at(i);
		if(StringChar != "[^\\\\d]")//Only Records Whitespace/tabs
		{
			Finished = true;
		}
		if(Finished)
		{
			TempString += StringChar;
		}
	}
	return TempString;
}
/** Examines the number of tabs/(equivalent of tabs in spaces) of whitespace before text
 * Rounds up partial amount of spaces leftover as being equivalent as another tab
 //Need to fix code to currectly calculate
 * @param LineString
 * @param TabEquivalent:Amount of spaces is equal to tab
 * @return
 */
int Niflib::StringFunctions::ExamineTabSpace(string LineString, int TabEquivalent)
{
	int AmountOfTabs = 0;
	int TotalSpaces = 0;
	int StringLength = LineString.length();
	bool Finished = false;
	string StringChar;
	for(int i = 0; (i < StringLength && Finished == false); i++)
	{
		StringChar = LineString.at(i);
		if(StringChar == "\t" || StringChar == "	")
		{
			AmountOfTabs++;
		}
		else if(StringChar == " ")
		{
			TotalSpaces++;
		}
		else
		{
			Finished = true;
		}
		if(TotalSpaces == TabEquivalent)
		{
			TotalSpaces = 0;
			AmountOfTabs++;
		}
	}
	if(TotalSpaces > 0)
	{//Round up number of spaces as being equivalent to a tab
		AmountOfTabs++;
	}
	return AmountOfTabs;
}

/** Examines the number of tabs/(equivalent of tabs in spaces) of whitespace before text<br>
 * Rounds up partial amount of spaces leftover as being equivalent as another tab<br>
 * This is reduced parameter version of the function that uses Netbeans/Programmer's Notepad equivalent for tabs being 4 spaces<br>
 * @param LineString
 * @return
 */
int Niflib::StringFunctions::ExamineTabSpace(string LineString)
{
	return ExamineTabSpace(LineString, 4);
}

/** Removes Specific amount of whitespace from front of LineString
 * @param LineString
 * @param TabEquivalent:How much spaces equal to tab(most cases equal to 4)
 * @param AmountOfWhitespaceRemoval:How many tabs worth of whitespace to remove
 * @return Linestring minus removed whitespace
 */
string Niflib::StringFunctions::RemoveAmountOfTabSpace(string LineString, int TabEquivalent, int AmountOfWhitespaceRemoval)
{
	string TempString = "";
	int AmountOfTabs = 0;
	int TotalSpaces = 0;
	int StringLength = LineString.length();
	bool Finished = false;
	string StringChar;
	for(int i = 0; i < StringLength; i++)
	{
		StringChar = "" + LineString.at(i);
		if(Finished == false)
		{
			if(StringChar == "[^\\\\d]")//Only Records Whitespace/tabs
			{
				if(StringChar == "\t")
				{
					AmountOfTabs++;
				}
				else if(StringChar == " ")
				{
					TotalSpaces++;
				}
			}
			else
			{
				TempString += StringChar;
				Finished = true;
			}
			if(TotalSpaces == TabEquivalent)
			{
				TotalSpaces = 0;
				AmountOfTabs++;
			}
			if(AmountOfTabs >= AmountOfWhitespaceRemoval)
			{
				Finished = true;
			}
		}
		else
		{
			TempString += StringChar;
		}
	}
	return TempString;
}

/** Removes all XML/HTML type tags (Things like<XML Data>) from LineString
 * @param LineString
 * @return
 */
string Niflib::StringFunctions::RemoveXMLTags(string LineString)
{
	int StringLength = LineString.length();
	string TempString = "";
	bool InsideTag = false;
	char StringChar;
	for(int i = 0; i < StringLength; i++)
	{
		StringChar = LineString.at(i);
		if(InsideTag)
		{
			if(StringChar == '>')
			{
				InsideTag = false;
			}
		}
		else if(StringChar == '<')
		{
			InsideTag = true;
		}
		else
		{
			TempString += StringChar;
		}
	}
	return TempString;
}

/** Similar to RemoveXMLTags but only returns data after first tag(only gives data for first tag contents)
 * @param LineString
 * @return
 */
string Niflib::StringFunctions::ReturnXMLTagContent(string LineString)
{
	int StringLength = LineString.length();
	string TempString = "";
	bool InsideTag = false;
	int TagDataStage = 0;
	char StringChar;
	for(int i = 0; i < StringLength; i++)
	{
		StringChar = LineString.at(i);
		if(InsideTag)
		{
			if(StringChar == '>')
			{
				InsideTag = false;
				if(TagDataStage == 0)
				{
					TagDataStage = 1;
				}
			}
		}
		else if(StringChar == '<')
		{
			InsideTag = true;
			if(TagDataStage == 1)
			{
				TagDataStage = 2;
			}
		}
		else if(TagDataStage == 1)
		{
			TempString += StringChar;
		}
	}
	return TempString;
}

Niflib::StringFunctions::StringFunctions()
{}

Niflib::StringFunctions::~StringFunctions()
{}

//************************************
// Method:    ReplaceFirst
// FullName:  Niflib::StringFunctions::ReplaceFirst
// Access:    public static
// Returns:   string
// Qualifier:
// Parameter: string LineString
// Parameter: string SearchString
// Parameter: string ReplacementString
//************************************
string Niflib::StringFunctions::ReplaceFirst(string LineString, string SearchString, string ReplacementString)
{
	if(SearchString != "")
	{
		//Current character loaded in steam
		char StringChar;
		//Current Loaded parts of LineString
		string LoadedLineString = "";
		//Current Characters worth of string found that match SearchString
		string PartialSearchBuffer = "";
		//Current Index of Loaded PartialSearch
		int PartialBufferIndex = 0;
		//Total size of LineString to load
		int StringSize = LineString.size();
		//Boolean check to determine if have found first string match
		bool SearchSuccess = false;
		for(int i = 0; i < StringSize; i++)
		{
			StringChar = LineString.at(i);
			if(SearchSuccess)
			{
				LoadedLineString += StringChar;
			}
			else
			{
				//Matching Partial String Search
				if(SearchString.at(PartialBufferIndex) == StringChar)
				{
					PartialSearchBuffer += StringChar;
					//Successful Find And Replace
					if(PartialSearchBuffer == SearchString)
					{
						LoadedLineString += ReplacementString;
						//PartialSearchBuffer = "";
						SearchSuccess = true;
					}
					else
					{
						PartialBufferIndex++;
					}
				}
				//Failed Partial String Search
				else
				{
					LoadedLineString += PartialSearchBuffer;
					PartialSearchBuffer = "";
					PartialBufferIndex = 0;
					LoadedLineString += StringChar;
				}
			}
		}
		LoadedLineString += PartialSearchBuffer;
		return LoadedLineString;
	}
	else
	{
		return LineString;
	}
}

//************************************
// Method:    ReplaceAll
// FullName:  Niflib::StringFunctions::ReplaceAll
// Access:    public static
// Returns:   string
// Qualifier:
// Parameter: string LineString
// Parameter: string SearchString
// Parameter: string ReplacementString
//************************************
string Niflib::StringFunctions::ReplaceAll(string LineString, string SearchString, string ReplacementString)
{
	if(SearchString != "")
	{
		//Current character loaded in steam
		char StringChar;
		//Current Loaded parts of LineString
		string LoadedLineString = "";
		//Current Characters worth of string found that match SearchString
		string PartialSearchBuffer = "";
		//Current Index of Loaded PartialSearch
		int PartialBufferIndex = 0;
		//Total size of LineString to load
		int StringSize = LineString.size();
		for(int i = 0; i < StringSize; i++)
		{
			StringChar = LineString.at(i);
			//Matching Partial String Search
			if(SearchString.at(PartialBufferIndex) == StringChar)
			{
				PartialSearchBuffer += StringChar;
				//Successful Find And Replace
				if(PartialSearchBuffer == SearchString)
				{
					LoadedLineString += ReplacementString;
					PartialSearchBuffer = "";
				}
				else
				{
					PartialBufferIndex++;
				}
			}
			//Failed Partial String Search
			else
			{
				LoadedLineString += PartialSearchBuffer;
				PartialSearchBuffer = "";
				PartialBufferIndex = 0;
				LoadedLineString += StringChar;
			}
		}
		LoadedLineString += PartialSearchBuffer;
		return LoadedLineString;
	}
	else
	{
		return LineString;
	}
}

//************************************
// Method:    ReturnParamName
// FullName:  Niflib::StringFunctions::ReturnParamName
// Access:    public static
// Returns:   string
// Qualifier:
// Parameter: string LineString
//************************************
string Niflib::StringFunctions::ReturnParamName(string LineString)
{
	string SearchString = "<hkparam name=\"";
	//Temporary convert of char to string
	string TempChar;
	//Current character loaded in steam
	string StringChar;
	//Current Loaded parts of ParamName
	string ParamName = "";
	//Current Characters worth of string found that match SearchString
	string PartialSearchBuffer = "";
	//Current Index of Loaded PartialSearch
	int PartialBufferIndex = 0;
	//Total size of LineString to load
	int StringSize = LineString.size();
	//Boolean check to determine if have found first string match of SearchString
	bool SearchSuccess = false;
	//Boolean check to determine if done scanning ParamName
	bool ParamNameScanInProgress = true;
	for(int i = 0; i < StringSize&&ParamNameScanInProgress; i++)
	{
		StringChar = LineString.at(i);
		if(SearchSuccess)
		{
			if(ParamNameScanInProgress)
			{
				if(StringChar != "\"")
				{
					ParamName += StringChar;
				}
				else
				{
					ParamNameScanInProgress = false;
				}
			}
		}
		else
		{
			TempChar = SearchString.at(PartialBufferIndex);
			//Matching Partial String Search
			if(TempChar == StringChar)
			{
				PartialSearchBuffer += StringChar;
				//Successful Find And Replace
				if(PartialSearchBuffer == SearchString)
				{
					PartialSearchBuffer = "";
					SearchSuccess = true;
				}
				else
				{
					PartialBufferIndex++;
				}
			}
			//Failed Partial String Search
			else
			{
				PartialSearchBuffer = "";
				PartialBufferIndex = 0;
			}
		}
	}
	return ParamName;
}

//************************************
// Method:    AddStringInFront
// FullName:  Niflib::StringFunctions::AddStringInFront
// Access:    public static
// Returns:   std::string
// Qualifier:
// Parameter: std::string ValueAdded
// Parameter: std::string TargetString
//************************************
std::string Niflib::StringFunctions::AddStringInFront(std::string ValueAdded, std::string TargetString)
{
	string TempString;
	TempString = ValueAdded + TargetString;
	return TempString;
}

//************************************
// Method:    AddStringInFront
// FullName:  Niflib::StringFunctions::AddStringInFront
// Access:    public static
// Returns:   std::string
// Qualifier:
// Parameter: char ValueAdded
// Parameter: std::string TargetString
//************************************
std::string Niflib::StringFunctions::AddStringInFront(char ValueAdded, std::string TargetString)
{
	string TempString = "";
	TempString += ValueAdded;
	return AddStringInFront(TempString, TargetString);
}

//************************************
// Method:    DoubleToStringConversion
// FullName:  Niflib::StringFunctions::DoubleToStringConversion
// Access:    public static
// Returns:   std::string
// Qualifier:
// Parameter: double TempValue
//************************************
std::string Niflib::StringFunctions::DoubleToStringConversion(double TempValue)
{
	string TempString = "";
	int IsNegative = TempValue < 0;
	int TempInt;
	if(IsNegative)
	{
		TempString += "-";
		TempValue *= -1;
	}
	int IntegerHalf = TempValue;
<<<<<<< HEAD
	double DecimalHalf = TempValue - (double) IntegerHalf;
	unsigned short CurrentDigit;
=======
<<<<<<< HEAD
	double DecimalHalf = TempValue - (double) IntegerHalf;
	unsigned short CurrentDigit;
=======
	double DecimalHalf = TempValue - IntegerHalf;
	int CurrentDigit;
>>>>>>> origin/master
>>>>>>> origin/master
	string DigitString = "";
	if(IntegerHalf == 0)
	{
		TempString += "0";
	}
	else
	{
		TempInt = NumberOfPlaces(IntegerHalf);
		for(int i = TempInt; i >= 0; i--)
		{
			CurrentDigit = floor(IntegerHalf / pow(10, i));
			IntegerHalf -= CurrentDigit*pow(10, i);
			TempString += DigitAsChar(CurrentDigit);
		}
	}
<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> origin/master
	if(DecimalHalf != 0.0)
	{
		DigitString += ".";
		int DecimalPlaces = NumberOfDecimalPlaces(DecimalHalf);
		for(int Index = 0; Index < DecimalPlaces; ++Index)
		{
			DecimalHalf *= 10;
			CurrentDigit = floor(DecimalHalf);
			DecimalHalf -= CurrentDigit;
<<<<<<< HEAD
=======
=======
	if(DecimalHalf != 0)
	{
		TempString += ".";
	}
	else
	{
		TempInt = NumberOfDecimalPlaces(DecimalHalf);
		cout << "Decimal NumberOfPlaces:" << TempInt << "\n";
		for(int i = -1; i >= TempInt; i--)
		{
			CurrentDigit = floor(DecimalHalf * 10);
			DecimalHalf -= (double) CurrentDigit*pow(10, i);
>>>>>>> origin/master
>>>>>>> origin/master
			DigitString += DigitAsChar(CurrentDigit);
		}
	}
	TempString += DigitString;
	return TempString;
}

//************************************
// Method:    IntToStringConversion
// FullName:  Niflib::StringFunctions::IntToStringConversion
// Access:    public static
// Returns:   std::string
// Qualifier:
// Parameter: int TempValue
//************************************
std::string Niflib::StringFunctions::IntToStringConversion(int TempValue)
{
	string TempString = "";
	int IsNegative = TempValue < 0;
	if(IsNegative)
	{
		TempString += "-";
		TempValue *= -1;
	}
	int IntegerHalf = TempValue;
	int CurrentDigit;
	if(IntegerHalf == 0)
	{
		TempString += "0";
	}
	else
	{
		for(int i = NumberOfPlaces(IntegerHalf); i >= 0; i--)
		{
			CurrentDigit = floor(IntegerHalf / pow(10, i));
			IntegerHalf -= CurrentDigit*pow(10, i);
			TempString += DigitAsChar(CurrentDigit);
		}
	}
	return TempString;
}

//************************************
// Method:    BoolAsString
// FullName:  Niflib::StringFunctions::BoolAsString
// Access:    public static
// Returns:   std::string
// Qualifier:
// Parameter: bool TempValue
//************************************
std::string Niflib::StringFunctions::BoolAsString(bool TempValue)
{
	string TempString;
	if(TempValue == true)
	{
		TempString = "true";
	}
	else
	{
		TempString = "false";
	}
	return TempString;
}

template <typename T>
std::string Niflib::StringFunctions::ConvertPointerToStringAddress(const T* obj)
{
	int address(reinterpret_cast<int>(obj));
	std::stringstream ss;
	ss << address;
	return ss.str();
}

template <typename T>
std::string Niflib::StringFunctions::ConvertPointerToStringAddressV2(T* obj)
{
	int address(reinterpret_cast<int>(obj));
	std::stringstream ss;
	ss << address;
	return ss.str();
}

<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> origin/master
//FloatToDouble code from https://github.com/PIlin/nanopb/blob/master/example_avr_double/double_conversion.c
//Licease from project code is From:
//Copyright(c) 2011 Petteri Aimonen <jpa at nanopb.mail.kapsi.fi>
//
//This software is provided 'as-is', without any express or
//implied warranty.In no event will the authors be held liable
//for any damages arising from the use of this software.
//
//Permission is granted to anyone to use this software for any
//purpose, including commercial applications, and to alter it and
//redistribute it freely, subject to the following restrictions :
//
//1. The origin of this software must not be misrepresented; you
//must not claim that you wrote the original software.If you use
//this software in a product, an acknowledgment in the product
//documentation would be appreciated but is not required.
//
//2. Altered source versions must be plainly marked as such, and
//must not be misrepresented as being the original software.
//
//3. This notice may not be removed or altered from any source
//distribution.

typedef union Niflib::StringFunctions::conversion_t
{
	float f;
	uint32_t i;
};

/* Note: IEE 754 standard specifies float formats as follows:
 * Single precision: sign,  8-bit exp, 23-bit frac.
 * Double precision: sign, 11-bit exp, 52-bit frac.
 */

uint64_t Niflib::StringFunctions::float_to_double(float value)
{
	conversion_t in;
	in.f = value;
	uint8_t sign;
	int16_t exponent;
	uint64_t mantissa;

	/* Decompose input value */
	sign = (in.i >> 31) & 1;
	exponent = ((in.i >> 23) & 0xFF) - 127;
	mantissa = in.i & 0x7FFFFF;

	if(exponent == 128)
	{
		/* Special value (NaN etc.) */
		exponent = 1024;
	}
	else if(exponent == -127)
	{
		if(!mantissa)
		{
			/* Zero */
			exponent = -1023;
		}
		else
		{
			/* Denormalized */
			mantissa <<= 1;
			while(!(mantissa & 0x800000))
			{
				mantissa <<= 1;
				exponent--;
			}
			mantissa &= 0x7FFFFF;
		}
	}

	/* Combine fields */
	mantissa <<= 29;
	mantissa |= (uint64_t) (exponent + 1023) << 52;
	mantissa |= (uint64_t) sign << 63;

	return mantissa;
}

float Niflib::StringFunctions::double_to_float(uint64_t value)
{
	uint8_t sign;
	int16_t exponent;
	uint32_t mantissa;
	conversion_t out;

	/* Decompose input value */
	sign = (value >> 63) & 1;
	exponent = ((value >> 52) & 0x7FF) - 1023;
	mantissa = (value >> 28) & 0xFFFFFF; /* Highest 24 bits */

	/* Figure if value is in range representable by floats. */
	if(exponent == 1024)
	{
		/* Special value */
		exponent = 128;
	}
	else if(exponent > 127)
	{
		/* Too large */
		if(sign)
			return -INFINITY;
		else
			return INFINITY;
	}
	else if(exponent < -150)
	{
		/* Too small */
		if(sign)
			return -0.0f;
		else
			return 0.0f;
	}
	else if(exponent < -126)
	{
		/* Denormalized */
		mantissa |= 0x1000000;
		mantissa >>= (-126 - exponent);
		exponent = -127;
	}

	/* Round off mantissa */
	mantissa = (mantissa + 1) >> 1;

	/* Check if mantissa went over 2.0 */
	if(mantissa & 0x800000)
	{
		exponent += 1;
		mantissa &= 0x7FFFFF;
		mantissa >>= 1;
	}

	/* Combine fields */
	out.i = mantissa;
	out.i |= (uint32_t) (exponent + 127) << 23;
	out.i |= (uint32_t) sign << 31;

	return out.f;
}

float Niflib::StringFunctions::DoubleToFloat(double TempValue)
{
	return double_to_float(TempValue);
}

double Niflib::StringFunctions::FloatToDouble(float TempValue)
{
	uint64_t TempInt = float_to_double(TempValue);
	//This part based on http://stackoverflow.com/questions/14855119/how-to-get-the-float-with-given-bit-pattern-as-int32-t-in-c
	double dValue;
	std::memcpy(&dValue, &TempInt, sizeof(dValue));
	return dValue;
}

//************************************
// Method:    FloatToStringConversion
// FullName:  FloatToStringConversion
// Access:    public static
// Returns:   string
// Qualifier:
// Parameter: float TempValue
//************************************
std::string Niflib::StringFunctions::FloatToStringConversion(float TempValue)
{
	string TempString = "";
	//Method based on http://stackoverflow.com/questions/5290089/how-to-convert-a-number-to-string-and-vice-versa-in-c
	//And http://stackoverflow.com/questions/554063/how-do-i-print-a-double-value-with-full-precision-using-cout
	std::ostringstream FloatStream;
	typedef std::numeric_limits< float > FloatLimit;
	FloatStream.precision(FloatLimit::max_digits10);
	FloatStream << fixed << TempValue;
	TempString = FloatStream.str();
<<<<<<< HEAD
=======
=======
//************************************
// Method:    FloatToStringConversion
// FullName:  FloatToStringConversion
// Access:    public static
// Returns:   string
// Qualifier:
// Parameter: float TempValue
//************************************
std::string Niflib::StringFunctions::FloatToStringConversion(float TempValue)
{
	std::string TempString = "";
	int IsNegative = TempValue < 0;
	int TempInt;
	if(IsNegative)
	{
		TempString += "-";
		TempValue *= -1;
	}
	int IntegerHalf = TempValue;
	float DecimalHalf = TempValue - IntegerHalf;
	int CurrentDigit;
	string DigitString = "";
	if(IntegerHalf == 0)
	{
		TempString += "0";
	}
	else
	{
		TempInt = NumberOfPlaces(IntegerHalf);
		for(int i = TempInt; i >= 0; i--)
		{
			CurrentDigit = floor(IntegerHalf / pow(10, i));
			IntegerHalf -= CurrentDigit*pow(10, i);
			TempString += DigitAsChar(CurrentDigit);
		}
	}
	if(DecimalHalf != 0)
	{
		TempString += ".";
	}
	else
	{
		TempInt = NumberOfDecimalPlaces(DecimalHalf);
		//cout << "Decimal NumberOfPlaces:" << TempInt << "\n";
		for(int i = -1; i >= TempInt; i--)
		{
			CurrentDigit = floor(DecimalHalf * 10);
			DecimalHalf -= (float) CurrentDigit*pow(10, i);
			DigitString += DigitAsChar(CurrentDigit);
		}
	}
	TempString += DigitString;
>>>>>>> origin/master
>>>>>>> origin/master
	return TempString;
}

std::string Niflib::StringFunctions::DisplayFullValues_Vector(float x, float y, float z, float w)
{
	string OutputString;
	OutputString = "{";
	OutputString += Niflib::StringFunctions::FloatToStringConversion(x);
	OutputString += ",";
	OutputString += Niflib::StringFunctions::FloatToStringConversion(y);
	OutputString += ",";
	OutputString += Niflib::StringFunctions::FloatToStringConversion(z);
	OutputString += ",";
	OutputString += Niflib::StringFunctions::FloatToStringConversion(w);
	OutputString += "}";
	return OutputString;
}

std::string Niflib::StringFunctions::DisplayFullValues(float x, float y, float z, float w)
{
	string OutputString;
	OutputString = "(";
	OutputString += Niflib::StringFunctions::FloatToStringConversion(x);
	OutputString += ",";
	OutputString += Niflib::StringFunctions::FloatToStringConversion(y);
	OutputString += ",";
	OutputString += Niflib::StringFunctions::FloatToStringConversion(z);
	OutputString += ",";
	OutputString += Niflib::StringFunctions::FloatToStringConversion(w);
	OutputString += ")";
	return OutputString;
}

std::string Niflib::StringFunctions::DisplayFullValues_Vector(float x, float y, float z)
{
	string OutputString;
	OutputString = "{";
	OutputString += Niflib::StringFunctions::FloatToStringConversion(x);
	OutputString += ",";
	OutputString += Niflib::StringFunctions::FloatToStringConversion(y);
	OutputString += ",";
	OutputString += Niflib::StringFunctions::FloatToStringConversion(z);
	OutputString += "}";
	return OutputString;
}

std::string Niflib::StringFunctions::DisplayFullValues(float x, float y, float z)
{
	string OutputString;
	OutputString = "(";
	OutputString += Niflib::StringFunctions::FloatToStringConversion(x);
	OutputString += ",";
	OutputString += Niflib::StringFunctions::FloatToStringConversion(y);
	OutputString += ",";
	OutputString += Niflib::StringFunctions::FloatToStringConversion(z);
	OutputString += ")";
	return OutputString;
}

std::string Niflib::StringFunctions::DisplayFullValues_Vector(float x, float y)
{
	string OutputString;
	OutputString = "{";
	OutputString += Niflib::StringFunctions::FloatToStringConversion(x);
	OutputString += ",";
	OutputString += Niflib::StringFunctions::FloatToStringConversion(y);
	OutputString += "}";
	return OutputString;
}

std::string Niflib::StringFunctions::DisplayFullValues(float x, float y)
{
	string OutputString;
	OutputString = "(";
	OutputString += Niflib::StringFunctions::FloatToStringConversion(x);
	OutputString += ",";
	OutputString += Niflib::StringFunctions::FloatToStringConversion(y);
	OutputString += ")";
	return OutputString;
}