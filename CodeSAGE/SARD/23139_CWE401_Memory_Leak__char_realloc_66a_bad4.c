#ifndef VAR1
void FUN1(char * VAR2[]);
void FUN2()
{
 char * VAR3;
 char * VAR2[5];
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR3 = (char *)realloc(VAR3, 100*sizeof(char));
 strcpy(VAR3, "");
 FUN3(VAR3);
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
#endif
