#ifndef VAR1
void FUN1(void * VAR2)
{
 VAR3 * * VAR4 = (VAR3 * *)VAR2;
 VAR3 * VAR5 = (*VAR4);
 /* FLAW: if the fopen failed, data will be NULL here */
 fclose(VAR5);
}
#endif
