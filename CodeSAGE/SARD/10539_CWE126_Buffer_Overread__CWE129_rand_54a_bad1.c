#ifndef VAR1
void FUN1(int VAR2);
void FUN2()
{
 int VAR2;
 VAR2 = -1;
 /* POTENTIAL FLAW: Set data to a random value */
 VAR2 = FUN3();
 FUN1(VAR2);
}
#endif
