#ifndef VAR1
void FUN1()
{
 double * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 /* FLAW: Using sizeof the pointer and not the data type in malloc() */
 VAR2 = (double *)malloc(sizeof(VAR2));
 *VAR2 = 1.7E300;
 }
 /* POTENTIAL FLAW: Attempt to use data, which may not have enough memory allocated */
 FUN2(*VAR2);
 free(VAR2);
}
#endif
