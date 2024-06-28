#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3 = VAR4;
 /* FLAW: if the fopen failed, data will be NULL here */
 fclose(VAR3);
}
#endif
