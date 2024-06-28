#ifndef VAR1
void FUN1();
void FUN2()
{
 int VAR2;
 VAR2 = -1;
 /* FLAW: Use a negative number */
 VAR2 = -1;
 VAR3 = VAR2;
 FUN1();
}
#endif
