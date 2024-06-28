#ifndef VAR1
void FUN1(VAR2<int, short> VAR3)
{
 short VAR4 = VAR3[2];
 {
 /* POTENTIAL FLAW: Convert data to a char, possibly causing a truncation error */
 char VAR5 = (char)VAR4;
 FUN2(VAR5);
 }
}
#endif
