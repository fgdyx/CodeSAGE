#ifndef VAR1
void FUN1(int VAR2);
void FUN2()
{
 int VAR2;
 VAR2 = -1;
 /* FLAW: Use a negative number */
 VAR2 = -1;
 FUN1(VAR2);
}
#endif
