#ifndef VAR1
void FUN1(VAR2 * VAR3[])
{
 VAR2 * VAR4 = VAR3[2];
 /* FLAW: if the fopen failed, data will be NULL here */
 fclose(VAR4);
}
#endif
