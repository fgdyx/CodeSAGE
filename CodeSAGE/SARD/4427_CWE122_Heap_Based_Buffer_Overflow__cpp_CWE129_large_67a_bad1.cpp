#ifndef VAR1
void FUN1(structType VAR2);
void FUN2()
{
 int VAR3;
 structType VAR2;
 VAR3 = -1;
 /* POTENTIAL FLAW: Use an invalid index */
 VAR3 = 10;
 VAR2.VAR4 = VAR3;
 FUN1(VAR2);
}
#endif
