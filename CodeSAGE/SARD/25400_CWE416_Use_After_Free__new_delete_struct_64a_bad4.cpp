#ifndef VAR1
void FUN1(void * VAR2);
void FUN2()
{
 VAR3 * VAR4;
 VAR4 = NULL;
 VAR4 = new VAR3;
 VAR4->VAR5 = 1;
 VAR4->VAR6 = 2;
 /* POTENTIAL FLAW: Delete data in the source - the bad sink attempts to use data */
 delete VAR4;
 FUN1(&VAR4);
}
#endif
