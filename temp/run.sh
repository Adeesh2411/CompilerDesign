lex program.l
yacc -d program_test.y
gcc y.tab.c lex.yy.c -ll
./a.out




python3 test.py
python3 tree.py


