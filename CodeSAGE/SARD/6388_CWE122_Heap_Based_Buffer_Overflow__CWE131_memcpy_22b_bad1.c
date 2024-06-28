#ifndef VAR1
extern int VAR2;
int * FUN1(int * VAR3)
{
 if(VAR2)
 {
 /* FLAW: Allocate memory without using sizeof(int) */
 VAR3 = (int *)malloc(10);
 }
 return VAR3;
}
#endif
