#ifndef VAR1
int FUN1(int VAR2);
void FUN2()
{
 int VAR2;
 VAR2 = -1;
 VAR2 = FUN1(VAR2);
 {
 /* POTENTIAL FLAW: Convert data to a short, possibly causing a truncation error */
 short VAR3 = (short)VAR2;
 FUN3(VAR3);
 }
}
#endif
