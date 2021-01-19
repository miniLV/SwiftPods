#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "acmod.h"
#import "ac_hash.h"
#import "ac_lmfunc_impl.h"
#import "ac_parsetext.h"
#import "ad.h"
#import "agc.h"
#import "allphone_search.h"
#import "bin_mdef.h"
#import "bio.h"
#import "bitarr.h"
#import "bitvec.h"
#import "blkarray_list.h"
#import "bo_ng_prob.h"
#import "byteorder.h"
#import "case.h"
#import "ckd_alloc.h"
#import "clapack_lite.h"
#import "cmdln_macro.h"
#import "cmd_ln.h"
#import "cmd_ln_defn.h"
#import "cmn.h"
#import "cmu_lex.h"
#import "cmu_lts_model.h"
#import "config.h"
#import "cst_alloc.h"
#import "cst_args.h"
#import "cst_audio.h"
#import "cst_cart.h"
#import "cst_cg.h"
#import "cst_clunits.h"
#import "cst_diphone.h"
#import "cst_endian.h"
#import "cst_error.h"
#import "cst_features.h"
#import "cst_ffeatures.h"
#import "cst_file.h"
#import "cst_hrg.h"
#import "cst_item.h"
#import "cst_lexicon.h"
#import "cst_lts.h"
#import "cst_lts_rewrites.h"
#import "cst_math.h"
#import "cst_mlpg.h"
#import "cst_mlsa.h"
#import "cst_phoneset.h"
#import "cst_regex.h"
#import "cst_regex_defs.h"
#import "cst_relation.h"
#import "cst_sigpr.h"
#import "cst_socket.h"
#import "cst_ss.h"
#import "cst_string.h"
#import "cst_sts.h"
#import "cst_synth.h"
#import "cst_tokenstream.h"
#import "cst_track.h"
#import "cst_units.h"
#import "cst_utterance.h"
#import "cst_utt_utils.h"
#import "cst_val.h"
#import "cst_val_const.h"
#import "cst_val_defs.h"
#import "cst_vc.h"
#import "cst_viterbi.h"
#import "cst_voice.h"
#import "cst_wave.h"
#import "cst_wchar.h"
#import "dict.h"
#import "dict2pid.h"
#import "disc_meth.h"
#import "disc_meth_absolute.h"
#import "disc_meth_good_turing.h"
#import "disc_meth_linear.h"
#import "disc_meth_witten_bell.h"
#import "err.h"
#import "evallm.h"
#import "f2c.h"
#import "fe.h"
#import "feat.h"
#import "fe_internal.h"
#import "fe_noise.h"
#import "fe_prespch_buf.h"
#import "fe_type.h"
#import "fe_warp.h"
#import "fe_warp_affine.h"
#import "fe_warp_inverse_linear.h"
#import "fe_warp_piecewise_linear.h"
#import "filename.h"
#import "fixpoint.h"
#import "flite.h"
#import "fsg_history.h"
#import "fsg_lextree.h"
#import "fsg_model.h"
#import "fsg_search_internal.h"
#import "general.h"
#import "genrand.h"
#import "glist.h"
#import "hash_table.h"
#import "heap.h"
#import "hmm.h"
#import "huff_code.h"
#import "idngram2lm.h"
#import "jsgf.h"
#import "jsgf_internal.h"
#import "jsgf_parser.h"
#import "jsgf_scanner.h"
#import "kws_detections.h"
#import "kws_search.h"
#import "listelem_alloc.h"
#import "lm3g_model_legacy.h"
#import "lm_trie.h"
#import "lm_trie_quant.h"
#import "logmath.h"
#import "matrix.h"
#import "mdef.h"
#import "mmio.h"
#import "ms_gauden.h"
#import "ms_mgau.h"
#import "ms_senone.h"
#import "mulaw.h"
#import "native_audio.h"
#import "ngram.h"
#import "ngrams_raw.h"
#import "ngram_model.h"
#import "ngram_model_arpa_legacy.h"
#import "ngram_model_dmp_legacy.h"
#import "ngram_model_internal.h"
#import "ngram_model_internal_legacy.h"
#import "ngram_model_legacy.h"
#import "ngram_model_set.h"
#import "ngram_model_set_legacy.h"
#import "ngram_model_trie.h"
#import "ngram_search.h"
#import "ngram_search_fwdflat.h"
#import "ngram_search_fwdtree.h"
#import "OEAcousticModel.h"
#import "OEAudioUtilities.h"
#import "OECMUCLMTKModel.h"
#import "OECommandArray.h"
#import "OEContinuousAudioUnit.h"
#import "OEContinuousModel.h"
#import "OEDynamicMethod.h"
#import "OEEventsObserver.h"
#import "OEFliteController.h"
#import "OEFliteVoice.h"
#import "OEGrammarDefinitions.h"
#import "OEGrammarGenerator.h"
#import "OEGraphemeGenerator.h"
#import "OELanguageModelGenerator.h"
#import "OELogging.h"
#import "OENotification.h"
#import "OEPocketsphinxController.h"
#import "OEPocketsphinxRunConfig.h"
#import "OERuntimeVerbosity.h"
#import "OESmartCMN.h"
#import "OEVersion.h"
#import "pc_general.h"
#import "phone_loop_search.h"
#import "pio.h"
#import "pocketsphinx.h"
#import "pocketsphinx_export.h"
#import "pocketsphinx_internal.h"
#import "prim_type.h"
#import "priority_queue.h"
#import "profile.h"
#import "ps_alignment.h"
#import "ps_lattice.h"
#import "ps_lattice_internal.h"
#import "ps_mllr.h"
#import "ps_search.h"
#import "ptm_mgau.h"
#import "s2_semi_mgau.h"
#import "s3types.h"
#import "sbthread.h"
#import "sphinxbase_export.h"
#import "sphinx_config.h"
#import "sphinx_wave2feat.h"
#import "state_align_search.h"
#import "stats.h"
#import "strfuncs.h"
#import "text2idngram.h"
#import "text2wfreq.h"
#import "tied_mgau_common.h"
#import "tmat.h"
#import "toolkit.h"
#import "usenglish.h"
#import "us_durz_cart.h"
#import "us_f0.h"
#import "us_ffeatures.h"
#import "us_int_accent_cart.h"
#import "us_int_tone_cart.h"
#import "us_nums_cart.h"
#import "us_phrasing_cart.h"
#import "us_pos_cart.h"
#import "us_regexes.h"
#import "us_text.h"
#import "vector.h"
#import "yin.h"
#import "OpenEarsHeader.h"
#import "Slt.h"

FOUNDATION_EXPORT double MNSwiftPodsVersionNumber;
FOUNDATION_EXPORT const unsigned char MNSwiftPodsVersionString[];

