#ifndef VAR1
void FUN1()
{
 double * VAR2;
 VAR2 = NULL;
 /* FLAW: Using sizeof the pointer and not the data type in malloc() */
 VAR2 = (double *)malloc(sizeof(VAR2));
 *VAR2 = 1.7E300;
 VAR3* VAR4 = new VAR5;
 VAR4->FUN2(VAR2);
 delete VAR4;
}
#endif
