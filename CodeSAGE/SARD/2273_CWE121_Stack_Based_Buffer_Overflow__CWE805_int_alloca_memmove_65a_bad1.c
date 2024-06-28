#ifndef VAR1
void FUN1(int * VAR2);
void FUN2()
{
 int * VAR2;
 void (*VAR3) (int *) = VAR4;
 int * VAR5 = (int *)FUN3(50*sizeof(int));
 int * VAR6 = (int *)FUN3(100*sizeof(int));
 /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
 * buffer in various memory copying functions using a "large" source buffer. */
 VAR2 = VAR5;
 FUN4(VAR2);
}
#endif
