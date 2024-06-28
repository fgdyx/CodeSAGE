#ifndef VAR1
void FUN1();
void FUN2()
{
 int VAR2;
 VAR2 = -1;
 /* POTENTIAL FLAW: Set data to a random value */
 VAR2 = FUN3();
 VAR3 = VAR2;
 FUN1();
}
#endif
