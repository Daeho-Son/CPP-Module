echo "make re"
make re

# TEST 1
echo -n "./convert 0 : "
./convert 0 > result

echo "char: Non displayable
int: 0
float: 0.0f
double: 0.0" > answer

CHECK=`diff result answer`

if [[ "$CHECK" == "" ]]; then
	echo "OK"
else
	echo "KO"
fi


# TEST 2
echo -n "./convert nan : "
./convert nan > result

echo "char: impossible
int: impossible
float: nanf
double: nan" > answer

CHECK=`diff result answer`

if [[ "$CHECK" == "" ]]; then
	echo "OK"
else
	echo "KO"
fi


# TEST 3
echo -n "./convert 42.0f : "
./convert 42.0f > result

echo "char: '*'
int: 42
float: 42.0f
double: 42.0" > answer

CHECK=`diff result answer`

if [[ "$CHECK" == "" ]]; then
	echo "OK"
else
	echo "KO"
fi

rm answer
rm result
