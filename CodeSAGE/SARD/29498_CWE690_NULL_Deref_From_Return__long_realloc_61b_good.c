#ifndef VAR1
long * FUN1(long * VAR2)
{
 VAR2 = (long *)realloc(VAR2, 1*sizeof(long));
 return VAR2;
}
#endif
