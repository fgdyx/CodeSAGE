#ifndef VAR1
void FUN1(VAR2<int, VAR3 *> VAR4);
void FUN2()
{
 VAR3 * VAR5;
 VAR2<int, VAR3 *> VAR4;
 VAR3 * VAR6 = (VAR3 *)FUN3(50*sizeof(VAR3));
 VAR3 * VAR7 = (VAR3 *)FUN3(100*sizeof(VAR3));
 /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
 * buffer in various memory copying functions using a "large" source buffer. */
 VAR5 = VAR6;
 VAR4[0] = VAR5;
 VAR4[1] = VAR5;
 VAR4[2] = VAR5;
 FUN1(VAR4);
}
#endif
