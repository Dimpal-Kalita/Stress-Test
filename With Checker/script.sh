set -e
g++ code.cpp -o code
g++ gen.cpp -o gen
g++ brute.cpp -o brute
g++ checker.cpp -o checker
for((i = 1;i<1000; ++i)); do
    ./gen $i > input_file
    ./code < input_file > myAnswer
    ./brute < input_file > correctAnswer
    ./checker > checker_log
    echo "Passed test: "  $i
done

echo "WA on the following test:"
cat input_file
echo "Your answer is:"
cat myAnswer
echo "Correct answer is:"
cat correctAnswer
echo "Checker message:"
cat checker_log