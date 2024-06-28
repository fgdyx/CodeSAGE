#ifndef VAR1
int VAR2 = 0;
void FUN1(int * VAR3);
void FUN2()
{
 int * VAR3;
 /* POTENTIAL FLAW: Set data to NULL */
 VAR3 = NULL;
 VAR2 = 1;
 FUN1(VAR3);
}
#endif
