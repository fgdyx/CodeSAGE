#ifndef VAR1
void FUN1(int VAR2)
{
 {
 /* POTENTIAL FLAW: Convert data to a short, possibly causing a truncation error */
 short VAR3 = (short)VAR2;
 FUN2(VAR3);
 }
}
#endif
