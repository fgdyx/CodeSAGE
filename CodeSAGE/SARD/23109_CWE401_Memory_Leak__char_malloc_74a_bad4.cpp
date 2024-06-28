#ifndef VAR1
void FUN1(VAR2<int, char *> VAR3);
void FUN2()
{
 char * VAR4;
 VAR2<int, char *> VAR3;
 VAR4 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR4 = (char *)malloc(100*sizeof(char));
 strcpy(VAR4, "");
 FUN3(VAR4);
 VAR3[0] = VAR4;
 VAR3[1] = VAR4;
 VAR3[2] = VAR4;
 FUN1(VAR3);
}
#endif
