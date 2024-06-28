#ifndef VAR1
void FUN1()
{
 char * VAR2 = VAR3;
 /* POTENTIAL FLAW: Possibly freeing memory twice */
 free(VAR2);
}
#endif
