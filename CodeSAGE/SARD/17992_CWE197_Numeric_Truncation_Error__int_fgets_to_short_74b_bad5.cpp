#ifndef VAR1
void FUN1(VAR2<int, int> VAR3)
{
 int VAR4 = VAR3[2];
 {
 /* POTENTIAL FLAW: Convert data to a short, possibly causing a truncation error */
 short VAR5 = (short)VAR4;
 FUN2(VAR5);
 }
}
#endif
