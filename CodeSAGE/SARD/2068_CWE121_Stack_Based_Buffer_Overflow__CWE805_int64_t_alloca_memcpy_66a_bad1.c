#ifndef VAR1
void FUN1(VAR2 * VAR3[]);
void FUN2()
{
 VAR2 * VAR4;
 VAR2 * VAR3[5];
 VAR2 * VAR5 = (VAR2 *)FUN3(50*sizeof(VAR2));
 VAR2 * VAR6 = (VAR2 *)FUN3(100*sizeof(VAR2));
 /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
 * buffer in various memory copying functions using a "large" source buffer. */
 VAR4 = VAR5;
 VAR3[2] = VAR4;
 FUN1(VAR3);
}
#endif
