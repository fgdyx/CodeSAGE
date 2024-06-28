#ifndef VAR1
void FUN1();
void FUN2()
{
 int VAR2;
 VAR2 = -1;
 /* POTENTIAL FLAW: Use an invalid index */
 VAR2 = -5;
 VAR3 = VAR2;
 FUN1();
}
#endif
