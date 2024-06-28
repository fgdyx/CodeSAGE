#ifndef VAR1
void FUN1(void * VAR2);
void FUN2()
{
 int VAR3;
 VAR3 = -1;
 /* FLAW: Use a negative number */
 VAR3 = -1;
 FUN1(&VAR3);
}
#endif
