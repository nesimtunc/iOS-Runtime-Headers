/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class MFPartialNetworkData, MimePart, MFWeakReferenceHolder, NSString, NSData, NSMutableDictionary;

@interface MimePart : NSObject  {
    NSString *_type;
    NSString *_subtype;
    NSMutableDictionary *_bodyParameters;
    NSString *_contentTransferEncoding;
    NSMutableDictionary *_otherIvars;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _range;
    MFWeakReferenceHolder *_parent;
    MFWeakReferenceHolder *_body;
    MimePart *_nextPart;
    MFPartialNetworkData *_partialData;
    NSData *_fullData;
    MFWeakReferenceHolder *_decodedData;
}

+ (BOOL)parseContentTypeHeader:(id)arg1 type:(id*)arg2 subtype:(id*)arg3 info:(id*)arg4;
+ (void)initialize;
+ (Class)attachmentClass;
+ (BOOL)isRecognizedClassForContent:(id)arg1;
+ (BOOL)parseContentTypeHeader:(id)arg1 type:(id*)arg2 subtype:(id*)arg3;

- (id)bodyData;
- (id)type;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)decodeMultipart;
- (id)decodeMultipartAlternative;
- (id)decodeMultipartRelated;
- (id)decodeApplicationOctet_stream;
- (id)decodeApplicationZip;
- (void)decodeIfNecessary;
- (id)bodyDataToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2;
- (id)contentsForTextSystemToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2;
- (id)contentsForTextSystemToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2 downloadIfNecessary:(BOOL)arg3;
- (id)contentsForTextSystemToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4;
- (void)_contents:(id*)arg1 toOffset:(unsigned int)arg2 resultOffset:(unsigned int*)arg3 downloadIfNecessary:(BOOL)arg4 asHTML:(BOOL)arg5 isComplete:(BOOL*)arg6;
- (BOOL)parseMimeBody;
- (BOOL)parseMimeBodyDownloadIfNecessary:(BOOL)arg1;
- (id)contentToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4;
- (id)copyBodyDataToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2;
- (BOOL)_hasCompleteBodyDataToOffset:(unsigned int)arg1;
- (void)clearCachedDescryptedMessageBody;
- (void)_setRFC822DecodedMessageBody:(id)arg1;
- (void)setMimeBody:(id)arg1;
- (void)setContentDescription:(id)arg1;
- (id)preservedHeaderValueForKey:(id)arg1;
- (id)contentsForTextSystemToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4 isComplete:(BOOL*)arg5;
- (id)bodyDataToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2 downloadIfNecessary:(BOOL)arg3;
- (id)contentsForTextSystemForcingDownload:(BOOL)arg1;
- (id)bodyDataForcingDownload:(BOOL)arg1;
- (void)_ensureBodyDataToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2 downloadIfNecessary:(BOOL)arg3 isComplete:(BOOL*)arg4 decoded:(id*)arg5;
- (id)_fullMimeTypeEvenInsideAppleDouble;
- (id)subpartAtIndex:(int)arg1;
- (id)startPart;
- (BOOL)shouldConsiderInlineOverridingExchangeServer;
- (id)_partThatIsAttachment;
- (id)chosenAlternativePart;
- (void)setSubparts:(id)arg1;
- (BOOL)isRich;
- (id)contentToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2 asHTML:(BOOL)arg3;
- (BOOL)isGenerated;
- (void)setIsGenerated:(BOOL)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (void)setSubtype:(id)arg1;
- (void)setType:(id)arg1;
- (id)subtype;
- (id)rfc822DecodedMessageBody;
- (unsigned int)totalTextSize;
- (int)numberOfAlternatives;
- (void)getNumberOfAttachments:(unsigned int*)arg1 isSigned:(BOOL*)arg2 isEncrypted:(BOOL*)arg3;
- (BOOL)parseIMAPPropertyList:(id)arg1;
- (BOOL)isAttachment;
- (void)setContentLocation:(id)arg1;
- (BOOL)hasContents;
- (void)_setDecryptedMessageBody:(id)arg1 isEncrypted:(BOOL)arg2 isSigned:(BOOL)arg3;
- (id)decryptedMessageBodyIsEncrypted:(BOOL*)arg1 isSigned:(BOOL*)arg2;
- (id)signedData;
- (BOOL)usesKnownSignatureProtocol;
- (id)contentsForTextSystem;
- (id)decodeText;
- (unsigned int)approximateRawSize;
- (id)storeData:(id)arg1 inMessage:(id)arg2 isComplete:(BOOL)arg3;
- (BOOL)_shouldContinueDecodingProcess;
- (id)fileWrapperForDecodedObject:(id)arg1 withFileData:(id*)arg2;
- (id)contentToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4 isComplete:(BOOL*)arg5;
- (unsigned long)textEncoding;
- (id)copyBodyDataToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2 downloadIfNecessary:(BOOL)arg3 isComplete:(BOOL*)arg4;
- (id)alternativeAtIndex:(int)arg1;
- (id)copyBodyDataToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2 downloadIfNecessary:(BOOL)arg3;
- (id)decodedDataForData:(id)arg1;
- (id)partNumber;
- (id)parentPart;
- (id)fileWrapper;
- (void)configureFileWrapper:(id)arg1;
- (id)attachments;
- (id)attachmentFilename;
- (BOOL)isHTML;
- (id)textHtmlPart;
- (void)setDisposition:(id)arg1;
- (void)setDispositionParameter:(id)arg1 forKey:(id)arg2;
- (id)fileWrapperForcingDownload:(BOOL)arg1;
- (BOOL)isReadableText;
- (void)setContentTransferEncoding:(id)arg1;
- (id)contentLocation;
- (id)languages;
- (id)contentID;
- (id)contentDescription;
- (id)contentTransferEncoding;
- (id)dispositionParameterForKey:(id)arg1;
- (id)dispositionParameterKeys;
- (id)bodyParameterKeys;
- (id)bodyParameterForKey:(id)arg1;
- (id)nextSiblingPart;
- (void)setContentID:(id)arg1;
- (id)disposition;
- (id)subparts;
- (void)setBodyParameter:(id)arg1 forKey:(id)arg2;
- (id)firstChildPart;
- (void)addSubpart:(id)arg1;
- (unsigned int)numberOfAttachments;
- (id)mimeBody;
- (void)download;
- (void)setLanguages:(id)arg1;
- (void)setRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)copySigners;
- (id)SMIMEError;
- (id)decodeApplicationPkcs7_mime;
- (id)decodeMultipartSigned;
- (void)_setSMIMEError:(id)arg1;
- (void)_setSigners:(id)arg1;
- (BOOL)_needsSignatureVerification:(id*)arg1;
- (id)newEncryptedPartWithData:(id)arg1 compositionSpecification:(id)arg2 encryptedData:(id*)arg3;
- (id)newSignedPartWithData:(id)arg1 sender:(id)arg2 compositionSpecification:(id)arg3 signatureData:(id*)arg4;

@end
