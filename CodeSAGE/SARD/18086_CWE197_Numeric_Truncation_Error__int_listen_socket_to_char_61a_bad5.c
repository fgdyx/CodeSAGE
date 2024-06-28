#ifndef VAR1
int FUN1(int VAR2);
void FUN2()
{
 int VAR2;
 VAR2 = -1;
 VAR2 = FUN1(VAR2);
 {
 /* POTENTIAL FLAW: Convert data to a char, possibly causing a truncation error */
 char VAR3 = (char)VAR2;
 FUN3(VAR3);
 }
}
#endif
