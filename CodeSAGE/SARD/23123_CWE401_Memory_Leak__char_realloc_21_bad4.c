#ifndef VAR1
static int VAR2 = 0;
static void FUN1(char * VAR3)
{
 if(VAR2)
 {
 /* POTENTIAL FLAW: No deallocation */
 ;
 }
}
void FUN2()
{
 char * VAR3;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR3 = (char *)realloc(VAR3, 100*sizeof(char));
 strcpy(VAR3, "");
 FUN3(VAR3);
 VAR2 = 1;
 FUN1(VAR3);
}
#endif
