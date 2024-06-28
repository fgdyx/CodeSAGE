#ifndef VAR1
void FUN1(structType VAR2);
void FUN2()
{
 int VAR3;
 structType VAR2;
 VAR3 = -1;
 /* POTENTIAL FLAW: Set data to a random value */
 VAR3 = FUN3();
 VAR2.VAR4 = VAR3;
 FUN1(VAR2);
}
#endif
