#ifndef VAR1
int VAR2 = 0;
void FUN1(int VAR3);
void FUN2()
{
 int VAR3;
 VAR3 = -1;
 /* POTENTIAL FLAW: Use an invalid index */
 VAR3 = 10;
 VAR2 = 1;
 FUN1(VAR3);
}
#endif
