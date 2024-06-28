#ifndef VAR1
int VAR2 = 0;
short FUN1(short VAR3);
void FUN2()
{
 short VAR3;
 VAR3 = -1;
 VAR2 = 1;
 VAR3 = FUN1(VAR3);
 {
 /* POTENTIAL FLAW: Convert data to a char, possibly causing a truncation error */
 char VAR4 = (char)VAR3;
 FUN3(VAR4);
 }
}
#endif
