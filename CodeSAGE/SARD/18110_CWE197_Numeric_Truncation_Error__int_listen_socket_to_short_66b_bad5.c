#ifndef VAR1
void FUN1(int VAR2[])
{
 int VAR3 = VAR2[2];
 {
 /* POTENTIAL FLAW: Convert data to a short, possibly causing a truncation error */
 short VAR4 = (short)VAR3;
 FUN2(VAR4);
 }
}
#endif
