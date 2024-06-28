#ifndef VAR1
extern int VAR2;
int * FUN1(int * VAR3)
{
 if(VAR2)
 {
 /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR3 = (int *)malloc(50*sizeof(int));
 }
 return VAR3;
}
#endif
