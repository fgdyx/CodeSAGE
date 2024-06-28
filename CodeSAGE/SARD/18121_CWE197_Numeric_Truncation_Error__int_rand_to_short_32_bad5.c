#ifndef VAR1
void FUN1()
{
 int VAR2;
 int *VAR3 = &VAR2;
 int *VAR4 = &VAR2;
 VAR2 = -1;
 {
 int VAR2 = *VAR3;
 /* POTENTIAL FLAW: Set data to a random value */
 VAR2 = FUN2();
 *VAR3 = VAR2;
 }
 {
 int VAR2 = *VAR4;
 {
 /* POTENTIAL FLAW: Convert data to a short, possibly causing a truncation error */
 short VAR5 = (short)VAR2;
 FUN3(VAR5);
 }
 }
}
#endif
