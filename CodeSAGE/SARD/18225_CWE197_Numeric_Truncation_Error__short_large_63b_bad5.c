#ifndef VAR1
void FUN1(short * VAR2)
{
 short VAR3 = *VAR2;
 {
 /* POTENTIAL FLAW: Convert data to a char, possibly causing a truncation error */
 char VAR4 = (char)VAR3;
 FUN2(VAR4);
 }
}
#endif
