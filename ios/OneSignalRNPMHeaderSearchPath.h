// XXX The header search path function getOuterDirectory is broken... and doesn't resolve the
// header search path correctly, in order to get it to add the ios directory which includes
// all the headers, we have to add this phony file... This way we don't have to manually add it
// we can let rnpm do its job.
