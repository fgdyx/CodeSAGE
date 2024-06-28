#ifndef VAR1
int VAR2 = 0;
int FUN1(int VAR3);
void FUN2()
{
 int VAR3;
 VAR3 = -1;
 VAR2 = 1;
 VAR3 = FUN1(VAR3);
 {
 /* POTENTIAL FLAW: Convert data to a short, possibly causing a truncation error */
 short VAR4 = (short)VAR3;
 FUN3(VAR4);
 }
}
#endif
