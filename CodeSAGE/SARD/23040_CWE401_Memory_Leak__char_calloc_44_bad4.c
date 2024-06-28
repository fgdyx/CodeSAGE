#ifndef VAR1
static void FUN1(char * VAR2)
{
 /* POTENTIAL FLAW: No deallocation */
 ;
}
void FUN2()
{
 char * VAR2;
 void (*VAR3) (char *) = VAR4;
 VAR2 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR2 = (char *)calloc(100, sizeof(char));
 strcpy(VAR2, "");
 FUN3(VAR2);
 FUN4(VAR2);
}
#endif
