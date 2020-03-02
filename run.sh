lex program.l
yacc -d program.y
gcc y.tab.c lex.yy.c -ll

./a.out
python3 test.py

