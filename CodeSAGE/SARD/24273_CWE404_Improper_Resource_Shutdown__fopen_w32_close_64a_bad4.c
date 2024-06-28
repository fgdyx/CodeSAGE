#ifndef VAR1
void FUN1(void * VAR2);
void FUN2()
{
 VAR3 * VAR4;
 VAR4 = NULL;
 /* POTENTIAL FLAW: Open a file - need to make sure it is closed properly in the sink */
 VAR4 = fopen("", "");
 FUN1(&VAR4);
}
#endif
