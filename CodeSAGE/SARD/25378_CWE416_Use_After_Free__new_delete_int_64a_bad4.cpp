#ifndef VAR1
void FUN1(void * VAR2);
void FUN2()
{
 int * VAR3;
 VAR3 = NULL;
 VAR3 = new int;
 *VAR3 = 5;
 /* POTENTIAL FLAW: Delete data in the source - the bad sink attempts to use data */
 delete VAR3;
 FUN1(&VAR3);
}
#endif
