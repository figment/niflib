/*	Code Created by James Michael Armstrong (NexusName:BlazesRus)
*/

#include "StringFunctions.h"
#include <locale>

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <iosfwd>

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
	double DecimalHalf = TempValue - IntegerHalf;
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
		cout << "Decimal NumberOfPlaces:" << TempInt << "\n";
		for(int i = -1; i >= TempInt; i--)
		{
			CurrentDigit = floor(DecimalHalf * 10);
			DecimalHalf -= (double) CurrentDigit*pow(10, i);
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