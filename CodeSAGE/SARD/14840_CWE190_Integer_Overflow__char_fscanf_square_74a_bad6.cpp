#ifndef VAR1
void FUN1(VAR2<int, char> VAR3);
void FUN2()
{
 char VAR4;
 VAR2<int, char> VAR3;
 VAR4 = '';
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR4);
 VAR3[0] = VAR4;
 VAR3[1] = VAR4;
 VAR3[2] = VAR4;
 FUN1(VAR3);
}
#endif
